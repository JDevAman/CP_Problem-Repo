// Largest K
// You are given an array A of size N
// Find the largest integer K such that there exists a subsequence S of length K where K is divisible by the number of distinct elements in S.
// Intuition:  

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve() {
    int n; cin>>n;
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        mpp[x]++;
    }

    vector<int> frequencies;
    for(auto it: mpp){
        frequencies.push_back(it.second);
    }

    // Decreasing Order
    sort(frequencies.rbegin(), frequencies.rend());
    // Prefix Sum
    int totalElements = 0, maxK = 0;
    for (int i = 0; i < frequencies.size(); ++i) {
        totalElements += frequencies[i];
        int maxPossibleK = (totalElements / (i+1)) * (i+1);
        maxK = max(maxK, maxPossibleK);
    }
    cout<<maxK<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}