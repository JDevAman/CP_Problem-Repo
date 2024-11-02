#include <bits/stdc++.h>
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


void haribhakt(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    vector<int> nums(n);
    int minDiff = LONG_MAX;
    for(int i=0; i<n; i++){
        cin>>nums[i];
        if(i > 0){
            minDiff = min(minDiff, nums[i] - nums[i-1]);
        } 
    }
    if(minDiff < 0) cout<<0<<endl;
    else{
        cout<<((minDiff/2) + 1) <<endl;
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

