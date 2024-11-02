#include <bits/stdc++.h>
using namespace std;

#define lli long long int

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// O(1) Solution Also Available
// Try to find roots of equation: S(n) - 2*S(x).

//f=lambda x: (2*x*x + x*(4*k-2) + (n-n*n-2*k*n))//2
//for _ in range(t):
//    n,k=map(int,input().split())
//    D=4*k*k + 4*k*(n-1) + (2*n*n-2*n+1)
//    i=(floor(sqrt(D))-(2*k-1))//2
//    ans=min(abs(f(i)),abs(f(i+1)))


// Function to calculate the prefix and postfix sums based on the given `mid`.
pair<lli, lli> val(lli k, lli n, lli mid){
    lli val1 = (mid * (2 * k + (mid - 1))) / 2; // Sum of the first `mid` terms
    lli val2 = (n * (2 * k + (n - 1))) / 2 - val1; // Sum of the remaining terms
    return {val1, val2};
}

void solve() {
    lli n, k; 
    cin >> n >> k;
    lli lo = 1, hi = n, curr = 1;

    // Binary search to find the optimal `mid`
    while (lo <= hi) {
        lli mid = (lo + hi) / 2;
        auto [a, b] = val(k, n, mid);
        if (b > a) {
            curr = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    
    // Calculate the differences for `curr` and `curr + 1`
    auto [a1, b1] = val(k, n, curr);
    auto [a2, b2] = val(k, n, curr + 1);
    
    // Output the minimum difference
    cout << min(abs(b1 - a1), abs(b2 - a2)) << endl;
}

int main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
