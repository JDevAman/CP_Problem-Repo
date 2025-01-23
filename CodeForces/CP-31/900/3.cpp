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

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    int sum = (k * (k + 1)) / 2;
    if (x < sum) {
        no;
    } else if (x == sum) {
        yes;
    } else {
        int quo = x / k;
        int rem = x % k;
        int half = k / 2;

        if (k & 1) { // k is odd
            int requiredN = quo + half + (rem > 0 ? 1 : 0);
            if (requiredN <= n) yes;
            else no;
        } else { // k is even
            int requiredN = quo + half + (half < rem ? 1 : 0);
            if (requiredN <= n) yes;
            else no;
        }
    }
}

signed main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
