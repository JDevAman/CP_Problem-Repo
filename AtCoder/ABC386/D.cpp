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

bool check(map<int, int>& bLoc, pair<int, int> wLoc) {
    int xW = wLoc.first;  
    int yW = wLoc.second; 

    auto it = bLoc.lower_bound(xW); 
    for (;it != bLoc.end(); it++) {
        int xB = it->first;   
        int yB = it->second;  

        if (yB > yW) {
            return true; 
        }
    }

    return false; 
}


void solve() {
   int n, m;
   cin >> n >> m;
   map<int, int> bLoc;
   map<int, int> wLoc;

   for (int i = 0; i < m; i++) {
        int x, y;
        char color;
        cin >> x >> y >> color;

        if (color == 'A') { 
            if (bLoc.find(x) != bLoc.end()) {
                bLoc[x] = max(bLoc[x], y); 
            } else {
                bLoc[x] = y;
            }
        } else {
            if (wLoc.find(x) != wLoc.end()) {
                wLoc[x] = min(wLoc[x], y); 
            } else {
                wLoc[x] = y;
            }
        }
   }

   for (auto node : wLoc) {
       if (check(bLoc, node)) {
           cout << "No" << endl;
           return;
       }
   }

   cout << "Yes" << endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
