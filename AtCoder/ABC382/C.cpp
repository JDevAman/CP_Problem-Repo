#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int bSearch(int value, vector<pair<int, int>>& nums){
    //  Ai <= value and decreasing
    int s = 0, e = nums.size() - 1;
    int ans = e;
    while(s < e){
        int mid = s + (e-s)/2;
        if(nums[mid].first < value){
            ans = mid;
            e = mid;
        }
        else if(nums[mid].first == value) return mid;
        else s = mid + 1;
    }
    // cout<<"For Value "<< value <<" ans is " <<ans<<" ";
    return ans;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++) {
        int hunger; cin>>hunger;
        if(vec.empty()){
            vec.push_back({hunger, i});
        }
        if(hunger < vec.back().first){
            vec.push_back({hunger, i});
        }
    }

    for(int i=0; i<m; i++){
        int sushiLvl; cin>>sushiLvl;
        if(sushiLvl < vec.back().first){ cout<<-1<<endl; continue; }
        int ind = bSearch(sushiLvl, vec);
        cout << vec[ind].second + 1 << endl; 
    }
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
