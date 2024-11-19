#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

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

    int currStart = -1, counter = 0;
    int kMinusOneStart = -1, kMinusOneEnd = -1, kStart = -1, kEnd = -1;

    // Identify the (k-1)-th and k-th 1-blocks
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (currStart == -1) currStart = i;
        } else {
            if (currStart != -1) {
                counter++;
                if (counter == k - 1) {
                    kMinusOneStart = currStart;
                    kMinusOneEnd = i;
                }
                if (counter == k) {
                    kStart = currStart;
                    kEnd = i;
                    break;
                }
                currStart = -1;
            }
        }
    }

    if (currStart != -1) {
        counter++;
        if (counter == k) {
            kStart = currStart;
            kEnd = n;
        }
    }

    // Move the k-th block just after the (k-1)-th block
    int kLength = kEnd - kStart;
    for (int i = 0; i < kLength; i++) {
        s[kMinusOneEnd + i] = '1';
        s[kStart + i] = '0';
    }

    cout << s << endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
