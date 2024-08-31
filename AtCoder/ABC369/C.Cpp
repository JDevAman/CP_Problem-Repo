#include <bits/stdc++.h>
using namespace std;

#define int long long



void solve() {
    int n, ans = 0; cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int length = 1;
    for(int i=1; i<n; i++){
        if(i > 1 && nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
            length++;
        }
        else length = 2;
        ans += (length - 1);
    }

    cout<<ans + n<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
