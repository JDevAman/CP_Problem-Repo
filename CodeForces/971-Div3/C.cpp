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


void solve() {
    lli n; cin >> n;
    vector<lli> nums(n);
    lli maxWealth = 0, totalWealth = 0,avgWealth = 0;
    for (int i = 0; i < n; ++i)
    {
        cin>>nums[i];
        totalWealth += nums[i];
    }

    if(n < 3){ cout<<-1<<endl; return; }
    sort(nums.begin(), nums.end());
    lli eleToCheck = (n/2);
    lli reqdWealth = (nums[eleToCheck]*2)*n + 1;
    cout<<max(reqdWealth-totalWealth, 0LL)<<endl;
}

int main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

