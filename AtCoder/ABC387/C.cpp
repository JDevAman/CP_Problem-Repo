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

bool check(string s){
    for(int i=1; i<s.size(); i++){
        if(s[0] <= s[i]) return false;
    }
    return true;
}

void helper(string l, string r, int& ans){
    int lLen = l.size(), rLen = r.size();
    if(check(l)) ans++;
    if(check(r)) ans++;

    int possible = 1;
    for(int i=l.size()-1; i>0; i--){
        if(str[i] > str[0]){
            possible = 0; break;
        }
        else  possible *= str[0] - str[i];
    }

    ans += possible;
}

void solve() {
    string l,r; cin>>l>>r;
    if(l == r) return check(l);
    int ans = 0;
    helper(l,r, ans);
    return ans;
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
