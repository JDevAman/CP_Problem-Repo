#include <bits/stdc++.h>
using namespace std;

#define int long long int

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, d, k; 
    cin >> n >> d >> k;
    vector<int> overCount(n + 2, 0);
    for (int i = 0; i < k; ++i) {
        int l, r; 
        cin >> l >> r;

        int start = max(1LL, l - d + 1);
        int end = min(n, r);

        if (start <= end) {
            overCount[start]++;
            overCount[end + 1]--;
        }
    }

    for (int i = 1; i <= n; ++i) {
        overCount[i] += overCount[i - 1];
    }

    int maxOver = -1, brotherDay = -1;
    for (int i = 1; i <= n - d + 1; ++i) {
        if (overCount[i] > maxOver) {
            maxOver = overCount[i];
            brotherDay = i;
        }
    }

    int minOverlap = k + 1, motherDay = -1;
    for (int i = 1; i <= n - d + 1; ++i) {
        if (overCount[i] < minOverlap) {
            minOverlap = overCount[i];
            motherDay = i;
        }
    }

    cout << brotherDay << " " << motherDay << endl;
}

signed main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
