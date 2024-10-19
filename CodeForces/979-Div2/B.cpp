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
    int n; cin>>n;
    string ans; 
    // Observation: 
    // Total non empty subsequences: 2^n - 1, n - length
    // F(t) = 2^m -1 , m - no of zeros.
    // G(t) = Total - F(t)
    // For minimum: G(t) = Total / 2.
    for(int i=0; i<n-1; i++){
        ans.push_back('0');
    }

    ans.push_back('1');
    cout<<ans<<endl;

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

