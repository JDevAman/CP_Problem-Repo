#include <bits/stdc++.h>
using namespace std;

// Type Aliases
#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

// Utility Aliases
#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

// Output Shorthand
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    vi nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    int ans = 0;
    if(n == 1){
        cout<<ans<<endl; return;
    }

    for(int i=1; i<n; i++){
        if(nums[i]%2 == nums[i-1]%2) ans++;
    }
    cout<<ans<<endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}