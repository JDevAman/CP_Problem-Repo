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
    int n; cin>>n;
    vi nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int req = 0;
    for(int i=1; i<n; i++){
        if(nums[i] < nums[i-1]){
            req += (nums[i-1] - nums[i]) + 1;
            nums[i] = nums[i-1]+1;
        }
    }
    cout<<req<<endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
