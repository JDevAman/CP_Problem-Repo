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
    for(int i=0; i<n; i++){
        int x; cin>>x;
    }
    if(n%2==0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
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

