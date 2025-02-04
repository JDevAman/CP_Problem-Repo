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
    int n, k; cin>>n>>k;
    vi nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    // start from 1 -> kth segment
    int curr = 1, lastEle = -1;
    while(curr <= k){
        int st = lastEle + 1, ind = st, end = n-k + (curr-1);
        int reqd = (curr+1)/2;
        if(curr & 1){
            // Find first not equal to..
            while(ind <= end && nums[ind+1] == reqd){
                ind++;
            }
            // ind > end || nums[ind+1] != curr
            // Different Number found
            if(ind <= end && nums[ind+1] != reqd){
                cout<<(curr+1)/2<<endl;
                return;
            }
            // Same Number exists more than 2 times.
            if(ind - st > 1){
                cout<<(curr+1)/2 + 1<<endl;
                return;
            } 
            if(ind > end) ind = end;
            lastEle = ind;
        }
        else{ 
            lastEle = ind;
        }
        curr++;
    }
    cout<<(k/2)+1<<endl;
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