#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
# define yes cout<<"Yes"<<endl
# define no cout<<"No"<<endl

// Returns array of Primes in O n * (log(logn))
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

int traverse(int layer, int n, int m, const vector<string>& carpet) {
    string temp;

    for (int j = layer; j < m - layer; j++) {
        temp.push_back(carpet[layer][j]);
    }

    for (int i = layer + 1; i < n - layer; i++) {
        temp.push_back(carpet[i][m - layer - 1]);
    }

    if (n - layer - 1 > layer) { 
        for (int j = m - layer - 2; j >= layer; j--) {
            temp.push_back(carpet[n - layer - 1][j]);
        }
    }

    if (m - layer - 1 > layer) { 
        for (int i = n - layer - 2; i > layer; i--) {
            temp.push_back(carpet[i][layer]);
        }
    }

    if (temp.size() >= 3) {
        temp += temp.substr(0, 3);
    }

    int count = 0;
    for (size_t i = 0; i + 3 < temp.size(); i++) {
        if (temp.substr(i, 4) == "1543") {
            count++;
        }
    }

    return count;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> carpet(n);

    for (int i = 0; i < n; i++) {
        cin >> carpet[i];
    }

    int totalOccurrences = 0;
    int totalLayers = min(n, m) / 2;
    for (int layer = 0; layer < totalLayers; layer++) {
        totalOccurrences += traverse(layer, n, m, carpet);
    }

    cout << totalOccurrences << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

