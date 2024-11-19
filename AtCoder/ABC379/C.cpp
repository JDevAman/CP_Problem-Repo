// Upsolve
#include <bits/stdc++.h>
using namespace std;

#define int long long int

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    // qi, ri
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }

    map<int, int> lastPos;
    for(int i=0; i<n; i++){
        if(lastPos.find(nums[i]) == lastPos.end()){
            cout<<-1<<" ";
        } 
        else{ 
            cout<<lastPos[nums[i]]+1<<" ";
        }
        lastPos[nums[i]] = i;
    }
    cout<<endl;
}

signed main() {
    cpp();
    solve();  // Only one test case
    return 0;
}
