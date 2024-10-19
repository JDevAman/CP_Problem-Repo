#include <bits/stdc++.h>
using namespace std;

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    vector<string> grid(n);

    // Input the grid
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    // Applying the brute force transformations
    for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            // Coordinates of the four corners that need to be swapped
            int x1 = i, y1 = j;
            int x2 = j, y2 = n - 1 - i;
            int x3 = n - 1 - i, y3 = n - 1 - j;
            int x4 = n - 1 - j, y4 = i;

            // Perform a 4-way swap (rotate 90 degrees)
            char temp = grid[x1][y1];
            grid[x1][y1] = grid[x4][y4];
            grid[x4][y4] = grid[x3][y3];
            grid[x3][y3] = grid[x2][y2];
            grid[x2][y2] = temp;
        }
    }

    // Output the modified grid
    for (int i = 0; i < n; i++) {
        cout << grid[i] << endl;
    }
}

int main() {
    cpp();
    int t = 1;  // Only one test case
    while (t--) {
        solve();
    }
    return 0;
}
