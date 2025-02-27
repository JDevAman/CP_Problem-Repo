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
    string s;cin>>s;
    int cnt = 0;
    for(auto ch: s){
        if(ch == '1') cnt++;
    }
    cout<<cnt<<endl;
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
