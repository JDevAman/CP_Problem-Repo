#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl
vector<pair<int, int>> moves = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void bt(int row, int col, int k, vector<string>& grid, int& ans) {
    if (k == 0) { 
        ans++;
        return;
    }

    int h = grid.size(), w = grid[0].size();
    for (auto move : moves) {
        int newR = row + move.first, newC = col + move.second;
        // Go 4 Traversal
        if (newR >= 0 && newR < h && newC >= 0 && newC < w && grid[newR][newC] == '.') {
            // Mark as Visited
            grid[newR][newC] = '#'; 
            bt(newR, newC, k - 1, grid, ans);
            // Mark as UnVisited
            grid[newR][newC] = '.'; 
        }
    }
}

void solve() {
    int h, w, k; 
    cin >> h >> w >> k;
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }

    int ans = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') {
                // Mark as Visited
                grid[i][j] = '#';
                // Do DFS Traversal
                bt(i, j, k, grid, ans);
                // Mark as UnVisited
                grid[i][j] = '.'; 
            }
        }
    }
    cout << ans << endl;
}

signed main() {   
    cpp(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
