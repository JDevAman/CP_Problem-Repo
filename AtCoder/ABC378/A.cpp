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
    map<int, int> mpp;
    for(int i=0; i<4; i++){
        int x;cin>>x;
        mpp[x]++;
    }

    int ans = 0;
    for(auto it: mpp){
        ans += (it.second / 2); 
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

