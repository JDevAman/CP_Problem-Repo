#include <bits/stdc++.h>
using namespace std;

// Type Aliases
#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

// Utility Aliases
#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

// Output Shorthand
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void helper(int a, int b, int tgtX, int tgtY, set<pair<int, int>>& st){
    // -a
    int tempX = tgtX-a, tempY = tgtY - (b);
    st.insert({tempX, tempY});
    tempY = tgtY + (b);
    st.insert({tempX, tempY});

    // +a
    tempX = tgtX + a;
    tempY = tgtY - (b);
    st.insert({tempX, tempY});
    tempY = tgtY + (b);
    st.insert({tempX, tempY});

    // +b
    tempX = tgtX + (b);
    tempY = tgtY - (a);
    st.insert({tempX, tempY});
    tempY = tgtY + a;
    st.insert({tempX, tempY});

    // -b
    tempX = tgtX - (b);
    tempY = tgtY - (a);
    st.insert({tempX, tempY});
    tempY = tgtY + a;
    st.insert({tempX, tempY});

}

void solve() {
    int a,b, xk, yk, xq, yq; cin>> a >> b >> xk>>yk >> xq>>yq;
    set<pair<int, int>> st1, st2;
    helper(a, b, xk, yk, st1);
    helper(a, b, xq, yq, st2);

    int ans = 0;
    for(auto it: st1){
        if(st2.find(it) != st2.end()) ans++;
    }
    cout<<ans<<endl;
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