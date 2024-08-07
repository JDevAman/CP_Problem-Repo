#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

int calc(vector<int>& nums, int num){
    int sum = 0;

    for(auto it: nums){
        sum += min(it, num);
    }

    return sum;
}


void solve() {
    int n, m; cin>>n>>m;
    vector<int> tpCost(n);
    int minEle = 0, maxEle = 0;
    for(int i=0; i<n; i++){
        cin>>tpCost[i];
        minEle = min(tpCost[i], minEle);
        maxEle = max(tpCost[i], maxEle);
    }

    int s = minEle, e = maxEle, ans = 0;
    while(s <= e){
        int mid = s + (e-s)/2;
        if(calc(tpCost, mid) <= m){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }

    if(ans == maxEle) cout<<"infinite"<<endl;
    else cout<<ans<<endl;
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
