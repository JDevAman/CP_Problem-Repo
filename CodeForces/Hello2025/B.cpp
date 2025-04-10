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
    int n, d; 
    cin >> n >> d;
    cout << 1 << " ";
    if (n >= 3 || (d == 3 || d == 6 || d == 9)) {
        cout << 3 << " ";
    }
    if (d == 5) cout << 5 << " ";
    if (d == 7 || n >= 3) {
        cout << 7 << " ";
    }
    if (d == 9 || ((d == 3 || d == 6) && n >= 3) || (n >= 6)) {
        cout << 9 << " ";
    }
    
    cout << endl;
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
