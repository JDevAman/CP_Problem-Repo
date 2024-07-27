#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> sweet(n), salt(n);
    for (int i = 0; i < n; i++) {
        cin >> sweet[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> salt[i];
    }
    sort(sweet.begin(), sweet.end(), greater<int>());
    sort(salt.begin(), salt.end(), greater<int>());

    int sSweet = 0, sSalt = 0, c1 = 0, c2 = 0;
    for(int i=0; i<n; i++){
        sSweet += sweet[i];
        c1++;
        if(sSweet > x) break;
    }


   for(int i=0; i<n; i++){
        sSalt += salt[i];
        c2++;
        if(sSalt > y) break;
   }

    cout << min(c1, c2) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
