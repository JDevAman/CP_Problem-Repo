#include <bits/stdc++.h>
using namespace std;

#define int long long

// Generate all possible sums of consecutive integers up to the maximum value
vector<int> generate_sums(int max_value) {
    vector<int> sums;
    int sum = 0;
    for (int i = 0; sum <= max_value; ++i) {
        sum += i;
        if (sum > max_value) break;
        sums.push_back(sum);
    }
    return sums;
}

void solve(const vector<int>& sums) {
    int l, r;
    cin >> l >> r;
    int diff = r - l;

    // Use binary search to find the upper bound of diff
    auto it = upper_bound(sums.begin(), sums.end(), diff);
    int len = distance(sums.begin(), it);
    cout << len << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Precompute sums up to a reasonable maximum value
    vector<int> sums = generate_sums(1000000000);

    int t;
    cin >> t;
    while (t--) {
        solve(sums);
    }
    return 0;
}
