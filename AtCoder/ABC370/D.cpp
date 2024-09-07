#include <bits/stdc++.h>
using namespace std;

#define lli long long int

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    lli h, w, q;
    cin >> h >> w >> q;
    vector<vector<bool>> grid(h, vector<bool>(w, true));
    lli ans = h * w;

    for(int k = 0; k < q; k++) {
        int i, j;
        cin >> i >> j;
        i--;
        j--;

        if(grid[i][j]) {
            grid[i][j] = false;
            ans--;
        }

        else{
            for(int row = i - 1; row >= 0; row--) {
                if(grid[row][j]) {
                    grid[row][j] = false;
                    ans--;
                    break;
                }
            }
            for(int row = i + 1; row < h; row++) {
                if(grid[row][j]) {
                    grid[row][j] = false;
                    ans--;
                    break;
                }
            }
            for(int col = j - 1; col >= 0; col--) {
                if(grid[i][col]) {
                    grid[i][col] = false;
                    ans--;
                    break;
                }
            }
            for(int col = j + 1; col < w; col++) {
                if(grid[i][col]) {
                    grid[i][col] = false;
                    ans--;
                    break;
                }
            }
        }
    }
    cout << ans << endl;
}

int main() {   
    cpp(); 
    int t = 1;

    // Uncomment if there are multiple test cases
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
