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
    bool alice_win = true;
    // Observation:
    // Alice will always use 
    // Cases: 0xx0 | 0xx1 | 1xx0 | 1xx1
    // Alice will win easily in all cases except 1.
    // For 1st Case:
    // 0110 -> If there is more than one occuring consecutively, then only Alice will win. As Bob can only remove one 1 at time. 
    if(str[0] == str[n-1] && str[0] == '0'){
        alice_win = false;
        for(int i=2; i<str.size() - 1; i++){
            if(str[i] == '1' && str[i-1] == '1'){
                alice_win = true;
                break;
            }
        }
    }
    if(alice_win) yes;
    else no;
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

