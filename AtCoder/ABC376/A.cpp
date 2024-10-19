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
    int n,k; cin>>n>>k;
    int candiesCount = 0, start = 0;
    for(int i=0; i<n; i++){
        int x; cin>> x;
        if(i == 0 || x-start >= k){ start = x; candiesCount++; }
    }
    cout<<candiesCount<<endl;
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

