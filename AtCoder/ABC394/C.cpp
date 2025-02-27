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

// Find contiguous W..A -> AAAACCC
void solve() {
    string s; cin>>s;
    int n = s.length();
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'W')  cnt++;
        else{
            if(s[i] == 'A' && cnt > 0){
                for(int st = i-cnt+1; st<=i; st++)
                    s[st] = 'C';
                s[i-cnt]='A';
            }
            cnt = 0;
        }
    }
    cout<<s<<endl;
}

signed main() {
    haribhakt_fastio();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
