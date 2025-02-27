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
    string s; cin>>s;
    int len = s.length();
    bool flag = false;
    for(int i=1; i<len; i++){
        if(s[i] == s[i-1]){
            flag = true;
            break;
        }
    }
    if(flag) cout<<1<<endl; 
    else cout<<len<<endl;
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

