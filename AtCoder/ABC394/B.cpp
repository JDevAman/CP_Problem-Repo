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

static bool comp(const string& a, const string& b){
    if(a.size() > b.size()) return false;
    return true;
}

void solve() {
    int n; cin>>n;
    vector<string> res(n);
    for(int i=0; i<n; i++){
        cin>>res[i];
    }

    sort(res.begin(), res.end(), comp);
    string t;
    for(int i=0; i<n; i++){
        t.append(res[i]);
    }
    cout<<t<<endl;
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