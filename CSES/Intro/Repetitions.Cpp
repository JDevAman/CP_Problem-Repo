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
    string s; cin>>s;
    int n = s.length();
    int maxLength = 1, len = 1;
    char lastCh = 'B';
    for(int i=0; i<n; i++){
        if(lastCh != s[i]){
            maxLength = max(maxLength, len);
            lastCh = s[i];
            len = 1;
        }
        else len++;
    }
    maxLength = max(maxLength, len);
    cout<<maxLength<<endl;
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
