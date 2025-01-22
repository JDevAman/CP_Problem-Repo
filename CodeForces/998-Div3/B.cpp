#include <bits/stdc++.h>
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
    int n,m; cin>>n>>m;
    vector<vector<int>> cards;
    for(int i=0; i<n; i++){
        vector<int> res(m);
        for(int j=0; j<m; j++){
            cin>>res[j];
        }
        sort(res.begin(), res.end());
        cards.push_back(res);
    }

    if(n == 1){ 
        cout<<1<<endl;
        return;
    }

    vector<int> p;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>> pq;
    for(int i=0; i<n; i++){
        pq.push({cards[i][0], i});
    }

    while(!pq.empty()){
        p.push_back(pq.top().second);
        pq.pop();
    }
    
    int topCard = -1;
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            if(cards[p[i]][j] < topCard){
                cout<<-1<<endl;
                return;
            }
            else topCard = cards[p[i]][j];
        }
    }

    for(auto ord: p)
        cout<<ord+1<<" ";
    cout<<endl;
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
