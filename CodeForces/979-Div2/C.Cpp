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
    string str; cin>>str;
    bool ans = true;
    int s = 0, e = n-1;
    // while(s <= e){
    //     if(str[s] == str[e] && str[s] == '0'){
    //         ans = false;
    //         break;
    //     }
    //     else{
    //         s++; e--;
    //     }
    // }

    if(str[s] == str[e] && str[s] == '0') no;
    else yes;
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

