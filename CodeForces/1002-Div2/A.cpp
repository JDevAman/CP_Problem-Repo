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
        int st = max(lastEle + 1, curr-1), tmp = st, e = n-k + (curr-1);
        if(curr & 1){
            // Find first not equal to..
            while(tmp <= e && nums[tmp+1] == curr){
                tmp++;
            }
            if(tmp - st > 1){
                // tmp == e
                if(nums[tmp+1] != curr && tmp <= e)  cout<<(curr+1)/2<<endl;
                else cout<<(curr+1/2) + 1<<endl;
                return;
            } 
            if(tmp == e + 1) tmp = e;
            lastEle = tmp;
        }
        else{
            int reqd = curr/2;
            if(nums[st] != reqd){
                cout<<reqd<<endl; 
                return;
            }
            lastEle = st;
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
