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

// Memoization table
map<tuple<int, int, int>, bool> memo;

bool check(int sum, int twoCnt, int threeCnt) {
    // Base cases
    if (sum % 9 == 0) return true;
    if (twoCnt < 0 || threeCnt < 0) return false;

    // Check memoization table
    auto state = make_tuple(sum, twoCnt, threeCnt);
    if (memo.find(state) != memo.end()) return memo[state];

    // Recursive case: pick or skip digits
    bool ans = false;
    if (twoCnt > 0) ans |= check(sum + 2, twoCnt - 1, threeCnt);
    if (threeCnt > 0) ans |= check(sum + 6, twoCnt, threeCnt - 1);
    if (twoCnt > 0 && threeCnt > 0) ans |= check(sum + 8, twoCnt - 1, threeCnt - 1);

    // Store result in memoization table
    return memo[state] = ans;
}

void solve() {
    string s; cin>>s;
    int len = s.length(), sum = 0, twoCnt = 0, threeCnt = 0;
    for(char c: s){
        sum += (c - '0');
        if(c == '2') twoCnt++;
        if(c == '3') threeCnt++;
    }

    if(sum % 9 == 0){
        cout<<"Yes"<<endl;
        return;
    }
    if(twoCnt != 9) twoCnt = twoCnt % 9;
    if(threeCnt != 3) threeCnt = threeCnt % 3;
    if(check(sum, twoCnt, threeCnt)){
        cout<<"Yes"<<endl; return;
    }

    cout<<"No"<<endl;


}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
