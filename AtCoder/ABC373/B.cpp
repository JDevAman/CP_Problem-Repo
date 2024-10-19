#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
# define yes cout<<"Yes"<<endl
# define no cout<<"No"<<endl

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper(int num, vector<int>& nums, vector<int>& res){
    int ind = upper_bound(nums.begin(), nums.end(), num) - nums.begin();
    if(ind > 0){
        ind -= 1;
    }

    num -= nums[ind];
    if(num < 0) return;
    res.push_back(ind); 
    helper(num, nums, res);
}

void solve() {
    int m; cin>>m;
    vector<int> nums(11), res;
    int num = 1;
    for(int i=0; i<11; i++){
        nums[i] = num;
        num *= 3;
    }

    helper(m, nums, res);
    cout<<res.size()<<endl;
    for(auto num: res){
        cout<<num<<" ";
    }
}

int main() {   
    cpp(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

