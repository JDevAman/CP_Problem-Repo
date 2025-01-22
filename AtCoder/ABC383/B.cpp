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

// BFS to compute humidified cells
int bfs(int h, int w, int d, int x1, int y1, int x2, int y2, vector<string>& grid) {
    int humidified = 0;
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    queue<pair<int, int>> q;

    // Add both humidifier positions to the queue
    q.push({x1, y1});
    q.push({x2, y2});
    visited[x1][y1] = true;
    visited[x2][y2] = true;

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        humidified++;

        for (int i = 0; i < 4; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            int dist1 = abs(nx - x1) + abs(ny - y1);
            int dist2 = abs(nx - x2) + abs(ny - y2);

            if (nx >= 0 && nx < h && ny >= 0 && ny < w && grid[nx][ny] == '.' && !visited[nx][ny] && (dist1 <= d || dist2 <= d)) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }

    return humidified;
}

void solve() {
    int h, w, d;
    cin >> h >> w >> d;
    vector<string> grid(h);
    for (int i = 0; i < h; i++) {
        cin >> grid[i];
    }

    vector<pair<int, int>> floorCells;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') {
                floorCells.push_back({i, j});
            }
        }
    }

    int maxHumidified = 0;

    for (size_t i = 0; i < floorCells.size() - 1; i++) { 
        for (size_t j = i + 1; j < floorCells.size(); j++) { 
            int x1 = floorCells[i].first, y1 = floorCells[i].second;
            int x2 = floorCells[j].first, y2 = floorCells[j].second;

            maxHumidified = max(maxHumidified, bfs(h, w, d, x1, y1, x2, y2, grid));
        }
    }

    cout << maxHumidified << endl;
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
