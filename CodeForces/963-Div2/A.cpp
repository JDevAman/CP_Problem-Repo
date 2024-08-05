#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;


void solve() {
    int n; cin>>n;
    string s;cin>>s;
    int ans = 0;
    map<char, int> freq;
    for(int i=0; i<4*n; i++){
        freq[s[i]]++;
    }

    for(auto it: freq){
        if(it.first != '?'){
            ans += min(it.second, n);
        }
    }

    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
