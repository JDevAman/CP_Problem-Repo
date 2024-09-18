#include <bits/stdc++.h>
using namespace std;

#define lli long long int
typedef set<lli> sti;          
typedef pair<lli, lli> pli;    
typedef map<lli, lli> mli;     

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    lli h, w, q;
    cin >> h >> w >> q;
    vector<sti> rows(h), cols(w);
    lli ans = h * w;

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            rows[i].insert(j);
            cols[j].insert(i);
        }
    }

    auto erase = [&](lli i, lli j) {
        rows[i].erase(j);
        cols[j].erase(i);
    };

    while(q--) {
        lli r, c;
        cin >> r >> c;
        r--; c--;

        if(rows[r].count(c)) {
            erase(r, c);
            ans--;
        } else {
            // Up: find the first element above (in the same column)
            auto it = cols[c].lower_bound(r);
            if(it != cols[c].begin()) {
                --it;
                erase(*it, c); 
                ans--;
            }

            // Down: find the first element below (in the same column)
            it = cols[c].upper_bound(r);
            if(it != cols[c].end()) {
                erase(*it, c);
                ans--;
            }

            // Left: find the first element to the left (in the same row)
            it = rows[r].lower_bound(c);
            if(it != rows[r].begin()) {
                --it;
                erase(r, *it);
                ans--;
            }

            // Right: find the first element to the right (in the same row)
            it = rows[r].upper_bound(c); 
            if(it != rows[r].end()) {
                erase(r, *it);
                ans--;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    cpp(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
