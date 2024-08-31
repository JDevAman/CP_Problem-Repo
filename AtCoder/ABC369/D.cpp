#include <bits/stdc++.h>
using namespace std;

#define int long long


int memoize(vector<int>& nums, int ind, int monst, vector<vector<int>>& dp){
    if(ind == nums.size()) return 0;

    monst %= 2;    
    //Pick
    if(dp[ind][monst] != -1) return dp[ind][monst];
    int pick = nums[ind] + memoize(nums, ind+1, monst+1, dp);
    if(monst % 2 == 1) pick += nums[ind];
    
    int notPick = memoize(nums, ind+1, monst, dp);
    return dp[ind][monst] = max(pick, notPick);
}

void solve() {
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    vector<vector<int>> dp(n+1, vector<int>(2, -1));
    cout<<memoize(nums, 0, 0, dp);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
