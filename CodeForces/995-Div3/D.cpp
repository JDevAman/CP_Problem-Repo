#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    vi nums(n);
    int sum = 0;

    // Read input
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        sum += nums[i];
    }

    sort(nums.begin(), nums.end());

    int minTwoSum = sum - y, maxTwoSum = sum - x;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int lowerBound = minTwoSum - nums[i];
        int upperBound = maxTwoSum - nums[i];

        // Find the valid range using binary search
        auto it1 = lower_bound(nums.begin() + i + 1, nums.end(), lowerBound);
        auto it2 = upper_bound(nums.begin() + i + 1, nums.end(), upperBound);

        // Count valid pairs
        ans += distance(it1, it2);
    }

    cout << ans << endl;
}

signed main() {
    haribhakt_fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
