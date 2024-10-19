#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int ans = 0;
    for(int i=0; i<n-2; i++){
        if(s[i] == '#' && s[i+2]=='#' && s[i+1] == '.') ans++;
    }
    cout<<ans<<endl;
}

signed main() {   
    cpp(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

