#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n, q; cin>> n >> q;
    string a, b; cin>>a>>b;
    vector<pair<int, int>> queries;
    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        queries.push_back({l - 1, r - 1});
    }

    vector<int> prefixSumA(26, 0), prefixSumB(26, 0);
    vector<vector<int>> freqDiff(n + 1, vector<int>(26, 0));

    for (int i = 0; i < n; ++i) {
        prefixSumA[a[i] - 'a']++;
        prefixSumB[b[i] - 'a']++;
        for (int j = 0; j < 26; ++j) {
            freqDiff[i + 1][j] = prefixSumA[j] - prefixSumB[j];
        }
    }

    for (auto &q : queries) {
        int l = q.first;
        int r = q.second;
        int totalDiff = 0;
        for (int j = 0; j < 26; ++j) {
            int diff = abs(freqDiff[r + 1][j] - freqDiff[l][j]);
            totalDiff += diff;
        }
        cout << totalDiff / 2 << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
