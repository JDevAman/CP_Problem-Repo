#include <bits/stdc++.h>
using namespace std;

#define lli long long int
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
    lli n; cin >> n;
    vi p(n);
    vi f(n);
    for(lli i=0; i<n; i++){
        cin>>p[i];
        p[i]--;
    }
    string s; cin>>s;

    vector<bool> vis(n);
    for(lli i=0; i<n; i++){
        if(vis[i]) continue;
       
        vi cycle;
        lli x = i;
        while(!vis[x]){
            cycle.push_back(x);
            vis[x] = true;
            x = p[x];
        }

        // Find count for all elements in a cycle
        lli cnt = 0;
        for(auto &e: cycle)
            cnt += (s[e] == '0');
        
        for(auto &u: cycle)
            f[u] = cnt;
    }

    for(lli i=0; i<n; i++){
        cout<<f[i]<<" ";
    }
    cout<<endl;
}

int main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

