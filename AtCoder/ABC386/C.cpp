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
    int k; string s,t;
    cin>>k>>s>>t;
    int n = s.length(), m = t.length();
    // Edge Cases
    if(max(n, m) - min(n,m) > 1){
        cout<<"No"<<endl; return;
    }

    // delete
    if(n == m + 1){
        int i = n-1, j = m-1;
        bool del = false;
        while(i >= 0 && j >= 0){
            if(s[i] != t[j]){
                if(del){
                    cout<<"No"<<endl;
                    return;
                }
                else{ del = true; i--; }
            }
            else{  i--; j--; }
        }
        cout<<"Yes"<<endl; 
    }

    // replace
    if(n == m){
        int i = n-1, j = m-1;
        bool repl = false;
        while(i >= 0 && j >= 0){
            if(s[i] != t[j]){
                if(repl){
                    cout<<"No"<<endl;
                    return;
                }
                else repl = true;
            }
            i--; j--;
        }
        cout<<"Yes"<<endl; 
    }
    // insert
    if(n == m-1){
        int i = n-1, j = m-1;
        bool insert = false;
        while(i >= 0 && j >= 0){
            if(s[i] != t[j]){
                if(insert){
                    cout<<"No"<<endl;
                    return;
                }
                else{ insert = true; j--; }
            }
            else{ i--; j--; }
        }
        cout<<"Yes"<<endl; 
    }
}

signed main() {   
    haribhakt_fastio(); 
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
