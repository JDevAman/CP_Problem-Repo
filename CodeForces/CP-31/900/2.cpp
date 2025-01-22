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
    int n,k; cin>>n>>k;
    string s; cin>>s;
    // Edge Case
    if(n == k+1){ cout<<"YES"<<endl; return; } 
    vector<int> freq(26, 0);
    for(auto ch: s){
        freq[ch-'a']++;
    }

    int odd = 0, even = 0;
    for(int i=0; i<26; i++){
        if(freq[i] & 1) odd++;
        else even++;
    }
    if(odd > k+1){ cout<<"NO"<<endl; return; }
    else{
        if(odd < k){
            int tempK = k;
            tempK -= odd;
            if(odd & 1) tempK++;
            if(2*even >= tempK) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl; return;
        }
    }
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