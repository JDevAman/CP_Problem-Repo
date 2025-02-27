#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
# define yes cout<<"Yes"<<endl
# define no cout<<"No"<<endl

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, x; cin>>n>>x;
    if (n == 1){ cout<<x<<endl; return;}
    else if (n == 2){ cout<<0<<" "<<x<<endl; return; }
    else{
        bitset<64> bitX(x);
        int setBits = bitX.count();
        cout<<bitX<<endl;

    }
    return;
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

