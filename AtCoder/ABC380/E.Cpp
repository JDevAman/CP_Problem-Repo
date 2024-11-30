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

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Segmented Sieve
// vector<int> sieve(int n) {
//     vector<bool> isPrime(n + 1, true);                
//     isPrime[0] = false; 
//     isPrime[1] = false;               

//     for (int div = 2; div * div <= n; div++) {
//         if (isPrime[div]) {
//             for (int multiple = div * div; multiple <= n; multiple += div) {
//                 isPrime[multiple] = false;
//             }
//         }
//     }

//     vector<int> primes;
//     for (int i = 2; i <= n; i++) {
//         if (isPrime[i]) primes.push_back(i);
//     }
//     return primes;
// }
// vector<int> getPrimesInRange(int l, int r, const vector<int>& basePrimes) {
//     vector<bool> isPrime(r - l + 1, true); 
//     for (int prime : basePrimes) {
//         long long start = max((long long)prime * prime, ((long long)l + prime - 1) / prime * prime);
//         for (long long multiple = start; multiple <= r; multiple += prime) {
//             isPrime[multiple - l] = false;
//         }
//     }

//     vector<int> primesInRange;
//     for (int i = 0; i < isPrime.size(); i++) {
//         if (isPrime[i] && (i + l) >= 2) {
//             primesInRange.push_back(i + l);
//         }
//     }
//     return primesInRange;
// }

void solve() {

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
