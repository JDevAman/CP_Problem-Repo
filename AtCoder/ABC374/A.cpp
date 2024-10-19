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
    string s; cin>>s;
    int len = s.size();
    if(len < 3){ no; return; }
    if(s[len-1] == 'n' && s[len-2] == 'a' && s[len-3] == 's') yes;
    else no;
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

