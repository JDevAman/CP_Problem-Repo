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
    lli a,b,k; cin>>a>>b>>k;
    lli maxStepsA = a/k + (a%k == 0 ? 0 : 1), maxStepsB = b/k + (b%k == 0 ? 0 : 1);
    lli ans = 2*max(maxStepsA, maxStepsB);
    if(maxStepsA > maxStepsB) ans -= 1;
    cout<<ans<<endl;
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

