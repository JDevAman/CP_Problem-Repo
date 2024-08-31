// 3D Prefix Sum - P[x][y][z]=A[x][y][z]+P[x−1][y][z]+P[x][y−1][z]+P[x][y][z−1]−P[x−1][y−1][z]−P[x−1][y][z−1]−P[x][y−1][z−1]+P[x−1][y−1][z−1]
#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n; 
    cin >> n;
    
    // Initialize the tuple and prefix sum arrays
    vector<vector<vector<int>>> tuple(n, vector<vector<int>>(n, vector<int>(n)));
    vector<vector<vector<int>>> prefixSum(n+1, vector<vector<int>>(n+1, vector<int>(n+1, 0)));

    for(int x = 1; x <= n; x++) {
        for(int y = 1; y <= n; y++) {
            for(int z = 1; z <= n; z++) {
                cin >> tuple[x-1][y-1][z-1];
                prefixSum[x][y][z] = tuple[x-1][y-1][z-1] 
                                    + prefixSum[x-1][y-1][z-1]
                                    + prefixSum[x-1][y][z] 
                                    + prefixSum[x][y-1][z] 
                                    + prefixSum[x][y][z-1]
                                    - prefixSum[x-1][y-1][z] 
                                    - prefixSum[x-1][y][z-1] 
                                    - prefixSum[x][y-1][z-1]; 
            }
        }
    }


    int q; 
    cin >> q;
    while (q--) {
        int lX, rX, lY, rY, lZ, rZ;
        cin >> lX >> rX >> lY >> rY >> lZ >> rZ;
        lX--; rX--; lY--; rY--; lZ--; rZ--;
        int ans = prefixSum[rX+1][rY+1][rZ+1] 
                - prefixSum[lX][rY+1][rZ+1] 
                - prefixSum[rX+1][lY][rZ+1] 
                - prefixSum[rX+1][rY+1][lZ] 
                + prefixSum[lX][lY][rZ+1] 
                + prefixSum[lX][rY+1][lZ] 
                + prefixSum[rX+1][lY][lZ] 
                - prefixSum[lX][lY][lZ];

        cout << ans << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
