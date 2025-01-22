#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve() {
    int n,a,b,c; cin>>n>>a>>b>>c;
    int sum = a+b+c;
    if((n % sum) == 0) cout<< (n/sum)*3 <<endl; 
    else{
        int ans = (n / sum)*3;
        int rem = n % sum;
        if(rem <= a) ans += 1;
        if(rem > a && rem <= a+b) ans += 2;
        if(rem > a+b && rem <= a+b+c) ans += 3;
        cout<<ans<<endl;
    }
}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
