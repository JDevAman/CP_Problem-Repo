#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void haribhakt(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int x,k;
    cin >> x >> k;
    if(x%k){
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<1<<" "<<x-1<<endl;
    }


}

signed main() {   
    haribhakt(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
