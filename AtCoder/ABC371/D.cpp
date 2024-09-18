#include <bits/stdc++.h>
using namespace std;

#define lli long long int

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    lli n, q; 
    cin >> n;

    vector<lli> loc(n), vill(n);
    vector<pair<lli, lli>> pairs(n);
    vector<lli> prefix_villagers(n, 0);

    for(int i = 0; i < n; i++) {
        cin >> loc[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> vill[i];
        pairs[i] = {loc[i], vill[i]};
    }
    prefix_villagers[0] = pairs[0].second;
    for(int i = 1; i < n; i++) {
        prefix_villagers[i] = prefix_villagers[i-1] + pairs[i].second;
    }

    cin >> q;
    while (q--) {
        lli l, r;
        cin >> l >> r;

        int start = lower_bound(loc.begin(), loc.end(), l) - loc.begin();
        int end = upper_bound(loc.begin(), loc.end(), r) - loc.begin() - 1;

        lli result = 0;
        if (start <= end) {
            result = prefix_villagers[end];
            if (start > 0) {
                result -= prefix_villagers[start - 1];
            }
        }

        cout << result << endl;
    }
}

int main() {
    cpp();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
