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

void solve() {
    int n,x,k; cin>>n>>x>>k;
    string s; cin>>s;
    vi nums(n);
    for(int i=0; i<n; i++){
        if(i > 0){
            if(s[i] == 'L') nums[i] = nums[i-1]-1;
            else nums[i] = nums[i-1] + 1;
        }
        else{
           if(s[i] == 'L') nums[i] = -1;
           else nums[i] = 1; 
        }
    }


    
    // int ind = 0, cnt = 0;
    // if(k <= n){

    // }
    // else{

    // }
    // for(int i=0; i<k; i++){
    //     ind = (ind) % n;
    //     if(s[ind] == 'L') x--;
    //     else x++;
    //     if(x == 0){ cnt++; ind = 0; }
    //     else ind++;
    // }
    // cout<<cnt<<endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
