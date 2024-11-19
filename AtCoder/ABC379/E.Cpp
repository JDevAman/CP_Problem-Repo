#include <bits/stdc++.h>
using namespace std;

#define int long long
#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix(n + 1, 0);
    // Finding unique subarray sums
    map<int, int> modUnique;

    // Calculate prefix sums
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            int subarraySum = prefix[i] - prefix[j];
            modUnique[subarraySum%m]++; 
        }
    }

    int ans = 0;
    for(auto it: modUnique){
        ans += it.first * it.second;
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}
