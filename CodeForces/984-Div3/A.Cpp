#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void haribhakt() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=1; i<n; i++){
        if(abs(a[i] - a[i-1]) != 5  && abs(a[i] - a[i-1]) != 7){
            no;
            return;
        }
    }
    yes;
}

signed main() {
    haribhakt();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
