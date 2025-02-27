#include <bits/stdc++.h>
using namespace std;

#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    sort(b.begin(), b.end()); // Sorting ensures we pick the smallest valid b[j]

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {  
            bool possible = false;

            // Try replacing a[i] with b[j] - a[i] for some valid b[j]
            for (int j = 0; j < m; j++) {
                int newVal = b[j] - a[i];  
                if (newVal > 0 && newVal <= a[i + 1]) {  
                    a[i] = newVal;
                    possible = true;
                    break; // Found a valid replacement
                }
            }

            if (!possible) {
                no;
                return;
            }
        }
    }
    
    yes;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
