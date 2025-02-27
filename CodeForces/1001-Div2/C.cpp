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
    int n,k;
    cin>>n>>k;
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mpp[x]++;
    }

    int score = 0;  
    for(auto it: mpp){
        int diff = k - it.first;
        if(mpp.find(diff) != mpp.end()){
            if(it.first < diff){
                score += min(it.second, mpp[diff]);
            }
            if(it.first == diff) score += (it.second) / 2;
        }
    }
    cout<<score<<endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
