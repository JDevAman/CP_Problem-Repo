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

bool check(char& ch1, char& ch2){
    if((ch1 == '(' && ch2 == ')' ) || (ch1 == '<' && ch2 == '>') || (ch1 == '[' && ch2 == ']'))
        return true;
    return false;
}

void solve() {
    string s; cin>>s;
    int n = s.length();
    stack<char> st;
    for(int i=0; i<n; i++){
        if(!st.empty() && check(st.top(), s[i])){
            st.pop();
        }
        else st.push(s[i]);
    }
    if(st.size() > 0) no;
    else yes;
}

signed main() {
    haribhakt_fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
