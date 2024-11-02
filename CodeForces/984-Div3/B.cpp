#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void haribhakt() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n, k;
    cin >> n>>k;
    for(int i=0; i<k; i++){
        int b,c; cin>>b>>c
        mpp[b] += c;
    }

    // We need K largest elements
    priority_queue<int, vector<int>, greater<int>()) minHeap;
    for(auto it: minHeap){
        minHeap.push(it.second);
        if(minHeap.size() > n) minHeap.pop();
    }

    int ans = 0;
    while(!minHeap.empty()){
        ans += minHeap.top();
        minHeap.pop();
    }
    cout<<ans<<endl;
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
