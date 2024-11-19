// Upsolve
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int q;
    cin >> q;
    
    multiset<int> plantHeights; // To keep track of plant heights with cumulative growth
    int currentGrowth = 0; // Keeps track of cumulative growth across all plants
    
    while (q--) {
        int queryType;
        cin >> queryType;
        
        if (queryType == 1) {
            // Type 1: Add a new plant with height 0
            plantHeights.insert(-currentGrowth); // Account for cumulative growth
        }
        else if (queryType == 2) {
            // Type 2: Increase height of all plants by T
            int t;
            cin >> t;
            currentGrowth += t; // Increase cumulative growth factor
        }
        else if (queryType == 3) {
            // Type 3: Harvest all plants with height at least H
            int h;
            cin >> h;
            
            // Calculate the effective height threshold after adjusting for current growth
            int effectiveHeight = h - currentGrowth;
            
            // Find plants with height >= effectiveHeight
            auto it = plantHeights.lower_bound(effectiveHeight);
            int harvestedCount = distance(it, plantHeights.end());
            
            // Erase all plants with height >= effectiveHeight
            plantHeights.erase(it, plantHeights.end());
            
            cout << harvestedCount << endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
