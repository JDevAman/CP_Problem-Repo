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
    lli n,m; cin>>n>>m;
    vector<bool> checkName(n, false);
    for(int i=0; i<m; i++){
        int x; cin>>x;
        char gender; cin>>gender;
        if(gender == 'M' && !checkName[x]){
            checkName[x] = true;
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}

int main() {   
    cpp(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

