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

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    string s; cin>>s;

    if(n == 1){
        cout<<s<<endl;
        return;
    }
    vector<int> freq(26, 0);
    int maxFreq = INT_MIN, minFreq = INT_MAX;
    for(char ch: s){
        freq[ch-'a']++;
    }

    int maxInd = -1, minInd = -1;
    for(int i=0; i<26; i++){
        if(maxInd == -1){
            if(freq[i] != 0) maxInd = i;
        }
        else{
            if(freq[i] > freq[maxInd]) maxInd = i;
        }
    }

    for(int i=25; i>=0; i--){
        if(minInd == -1){
            if(freq[i] != 0) minInd = i;
        }
        else{
            if(freq[i] < freq[minInd] && freq[i] != 0) minInd = i;
        }
    }
    for(int i=0; i<n; i++){
        if(s[i] - 'a' == minInd){
            s[i] = 'a' + maxInd;
            break;
        }
    }

    cout<<s<<endl;
}

signed main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
