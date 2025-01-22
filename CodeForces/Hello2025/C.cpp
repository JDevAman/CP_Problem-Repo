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
    // Case: k < n - 1 : Impossible
    // Case: k == n : ALL possible
    // Case k == n-1 : Find one possible answer
    int n, m, k;
    cin >> n >> m >> k;

    vi lsts(m);
    si known;    

    for (int i = 0; i < m; i++) {
        cin >> lsts[i];
    }

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        known.insert(x);
    }

    for (int i = 0; i < m; i++) {
        if (known.size() == n || (known.count(lsts[i]) == 0 && known.size() == n-1)) {
            cout << 1;  
        } else {
            cout << 0; 
        }
    }
    cout << endl;
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
