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
    char ab,ac,bc;
    cin>>ab>>ac>>bc;
    //
    if(ab == '<'){
        if(ac=='<'){
            if(bc == '<') cout<<"B"<<endl;
            else cout<<"C"<<endl;
        }
        else cout<<"A"<<endl; 
    }
    else{
        if(ac=='>'){
            if(bc == '<') cout<<"C"<<endl;
            else cout<<"B"<<endl;
        }
        else cout<<"A"<<endl;
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

