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

void haribhakt_fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    int n; cin>>n;
    int minInd = 0;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
        if(nums[i] < nums[minInd]) minInd = i;
    }    
    if(nums[minInd] == 1){no;return;}
    for(int i=0; i<n; i++){
        if(abs(nums[i] - nums[minInd]) < abs(i-minInd)){
            no; return;
        }
    }
    yes;
}

signed main()
{
    haribhakt_fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
