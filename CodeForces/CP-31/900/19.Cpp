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

// Function to return an array of primes up to `maxN` in O(n * log(log(n)))
// vector<int> sieve(int maxN) {
//     vector<bool> isPrime(maxN + 1, true);
//     isPrime[0] = isPrime[1] = false;

//     for (int i = 2; i * i <= maxN; ++i) {
//         if (isPrime[i]) {
//             for (int j = i * i; j <= maxN; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }

//     vector<int> primes;
//     for (int i = 2; i <= maxN; ++i) {
//         if (isPrime[i]) {
//             primes.push_back(i);
//         }
//     }
//     return primes;
// }

// Custom comparator function for pairs
// bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
//     if (a.first != b.first) {
//         return a.first > b.first; // Descending order by first element
//     }
//     return a.second < b.second;  // Ascending order by second element
// }

void solve() {
    int x0, n; 
    cin>>x0>>n;
    int rem = n%4, toAdd = 0;
    if(rem == 0) toAdd = 0;
    else if(rem == 1){
        if(x0&1) toAdd = n;
        else toAdd -= n;
    }
    else if(rem == 2){
        if(x0&1) toAdd -= 1;
        else toAdd = 1;
    }
    // 3
    else{
        if(x0&1) toAdd -= (n+1);
        else toAdd = (n+1);
    }
    // cout<<"toAdd "<<toAdd<<endl;
    cout<<x0+toAdd<<endl;
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