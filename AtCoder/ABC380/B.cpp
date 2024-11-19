#include <bits/stdc++.h>
using namespace std;

// Type Aliases
#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

// Utility Aliases
#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

// Output Shorthand
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Initialize variables
    int currStart = -1, kthStart = 0, kthEnd = 0, lastStart = 0, lastEnd = 0, counter = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (currStart == -1) {
                currStart = i;
                counter++;
            }
        } else {
            if (currStart != -1) {
                if (counter == k - 2) {
                    lastStart = currStart;
                    lastEnd = i;
                }
                if (counter == k - 1) {
                    kthStart = currStart;
                    kthEnd = i;
                }
            }
        }
        // Process the swap
        int nextIdx = lastEnd + 1, length = lastEnd - lastStart;
        for (int i = nextIdx; i < min(nextIdx + length, n); i++) {
            s[i] = '1';
        }
        for (int i = lastStart; i < lastEnd; i++) {
            s[i] = '0';
        }

        // Print the updated string for intermediate steps
        cout << s << endl;  // Remove or comment this line if intermediate output is not required.
    }
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}