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
    int n; cin>>n;
    string s; cin>>s;
    int cnt = 0;
    if(s[0] == '1') cnt++;
    for(int i=1; i<n; i++){
        if(s[i] != s[i-1]) cnt++;
    }  
    cout<<cnt<<endl;
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

