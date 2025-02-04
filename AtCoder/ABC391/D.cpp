#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for (int i = 0; i < h; i++) cin >> s[i];
    int si, sj, gi, gj;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'S') {
                si = i, sj = j;
            } else if (s[i][j] == 'G') {
                gi = i, gj = j;
            }
        }
    }
    int ans = inf;
    vector<vector<pair<int, int>>> moves(2);
    moves[0] = {{0, 1},
                {0, -1}};
    moves[1] = {{1,  0},
                {-1, 0}};
    for (int p = 0; p < 2; p++) {
        vector d(h, vector<int>(w, inf));
        d[si][sj] = 0;
        queue<pair<int, int>> q;
        q.emplace(si, sj);
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            for (auto [di, dj]: moves[(i + j + p) & 1]) {
                int ni = i + di, nj = j + dj;
                if (ni < 0 or ni >= h or nj < 0 or nj >= w) continue;
                if (s[ni][nj] == '#') continue;
                if (d[ni][nj] == inf) {
                    d[ni][nj] = d[i][j] + 1;
                    q.emplace(ni, nj);
                }
            }
        }
        ans = min(ans, d[gi][gj]);
    }
    if (ans == inf) ans = -1;
    cout << ans << endl;
}
