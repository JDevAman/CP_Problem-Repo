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

void haribhakt() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s; cin>>s;
    int n,q; cin>>q;
    n = s.size();
    int count1100 = 0;
    for(int i=0; i<= n-4; i++){
        if(s.substr(i,4) == "1100") count1100++;
    }


    for(int j=0; j<q; j++){
        int ind, newVal; cin>>ind>>newVal;
        ind--;
        if(s[ind] == (newVal + '0')){
            cout<< ((count1100 > 0) ? "YES\n" : "No\n");
            continue;
        }
        else{
            // Reduce
            for(int i= max(ind-3, 0LL); i<min(n-3, ind); i++){
                if(s.substr(i,4) == "1100") count1100--;
            }

            // Update Ind
            s[ind] = (newVal + '0');
            // Update Count Values
            for(int i= max(ind-3, 0LL); i<min(n-3, ind); i++){
                if(s.substr(i,4) == "1100") count1100++;
            }
            cout<<((count1100 > 0) ? "YES\n" : "No\n")
        }

    }
}

signed main() {
    haribhakt();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
