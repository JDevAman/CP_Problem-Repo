#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> h(n), ans(n, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    // 2 1 4 3 5
    stack<int> stc; 
    // Traverse from right to left starting from the second last building
    for (int i = n - 2; i >= 0; i--) {
        // Remove all buildings that are smaller than the building to the right of current building
        while (!stc.empty() && h[stc.top()] < h[i + 1]) {
            stc.pop();
        }
        // Push the current building's index (i + 1) to the stack
        stc.push(i + 1);
        // The answer for building i is the size of the stack
        ans[i] = stc.size();
    }

    for (int i = 0; i < n; i++) {
        cout << visible_count[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
