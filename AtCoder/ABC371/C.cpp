#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve() {
    int n, mg, mh;
    cin >> n >> mg;

    // Adjacency matrices for graphs G and H
    vector<vector<int>> adjG(n, vector<int>(n, 0)), adjH(n, vector<int>(n, 0));

    // Reading edges of graph G
    for (int i = 0; i < mg; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;  // zero-indexing the vertices
        adjG[u][v] = adjG[v][u] = 1;
    }

    cin >> mh;
    // Reading edges of graph H
    for (int i = 0; i < mh; i++) {
        int u, v;
        cin >> u >> v;
        u--; v--;  // zero-indexing the vertices
        adjH[u][v] = adjH[v][u] = 1;
    }

    // Reading the cost matrix
    vector<vector<int>> cost(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cin >> cost[i][j];
        }
    }

}

int main() {
    cpp();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
