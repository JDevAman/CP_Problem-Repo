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
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    set<long long> distinctSums; 
    for (int i = 0; i < nums.size(); ++i) {
        long long currentSum = 0;
        for (int j = i; j < nums.size(); ++j) {
            currentSum += nums[j];
            distinctSums.insert(currentSum); 
        }
    }

    // Total sum of the entire array
    long long total_sum = accumulate(nums.begin(), nums.end(), 0LL);
    long long target = total_sum / 2;  


    long long best = 0;
    for (auto sum : distinctSums) {
        if (sum <= target) {
            best = max(best, sum);
        }
    }

    long long result = max(best, total_sum - best);  
    cout << result << endl;
}

int main() {
    cpp();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
