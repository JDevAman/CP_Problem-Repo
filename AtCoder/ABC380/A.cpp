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

void solve() {
    string s; cin>>s;
    int ones = 0, twos = 0, threes = 0;
    for(char ch: s){
        int num = ch - '0';
        if(num == 1) ones++;
        if(num == 2) twos++;
        if(num == 3) threes++;
    }
    if(ones == 1 && twos == 2 && threes == 3) yes;
    else no;
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}