#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define int long long

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> zeros(n, 0), ones(n, 0); 
    vector<string> store(m); 

    for (int i = 0; i < m; i++) {
        cin >> store[i];
    }

    // Count the number of '0's and '1's at each position
    for (string s : store) {
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') zeros[i]++;
            else if (s[i] == '1') ones[i]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int ques = m - (zeros[i] + ones[i]); 

        int target = (m+1) / 2;
        
        if (zeros[i] < target) {
            int to_add = min(ques, target - zeros[i]);
            zeros[i] += to_add;
            ques -= to_add;
        }

        if (ones[i] < target) {
            int to_add = min(ques, target - ones[i]);
            ones[i] += to_add;
            ques -= to_add;
        }
        ans += zeros[i] * ones[i];
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
