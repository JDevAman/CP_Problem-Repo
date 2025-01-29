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
    vector<int> nums(5);
    int mismatch = 0, swaps = 0;
    for(int i=0; i<5; i++){
        cin>>nums[i];
        if(i > 0 && nums[i] < nums[i-1]) mismatch++;
        if(i > 0 && nums[i] == nums[i-1] - 1) swaps++;
    }
    if(mismatch == 1 && swaps == 1) yes;
    else no;
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