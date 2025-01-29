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
    string s, t; cin>>s>>t;
    vector<int> freq(26, 0);
    for(char ch: t){
        freq[ch-'A']++;
    }

    int i = s.size() - 1, j = t.size() - 1;
    while(i >= 0){
        if(s[i] == t[j]){
            freq[s[i] - 'A']--;
            i--;
            j--;
        }
        else{
            if(freq[s[i]-'A'] > 0){
                no;
                return;
            }
            i--;
        }
    }
    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            no;
            return;
        }
    }
    yes;
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