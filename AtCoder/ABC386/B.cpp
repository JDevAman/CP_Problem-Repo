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

// Directions for BFS
vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};



void solve() {
    string s; cin>>s;
    int ans = 0, consZero = 0;
    for(auto ch: s){
        // if 0 -> and next is also 0
        if(ch == '0'){
            consZero++;
        }
        else{
            if(consZero > 0){
                ans += (consZero + 1)/2;
                consZero = 0;
            }
            ans++;
        }
    }
    // zero at last
    if(consZero > 0){
        ans += (consZero + 1)/2;
        consZero = 0;
    }
    cout<<ans<<endl;
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
