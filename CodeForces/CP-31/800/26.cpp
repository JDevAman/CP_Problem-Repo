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

// find smalles

void solve() {
    int n; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    sort(nums.begin(), nums.end());
    int gcd = 0;
    cout<<"GCD"<<endl;
    for(int i=1; i<n; i++){
        if(i == 1) gcd = __gcd(nums[0], nums[1]);
        else gcd = __gcd(nums[i], gcd);
        cout<<gcd<<" ";
    }
    if(gcd > n)    cout<<"\nNO"<<endl;
    else cout<<"\nYES"<<endl;
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