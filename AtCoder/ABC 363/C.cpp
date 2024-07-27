#include<bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void backtrack(string& s, string& current, vector<bool>& used, int& k, int& cnt){
    if(s.length() == current.length()){
        // Check for palindrome
        bool containsPalin = false;
        for(int i=0; i<= s.length() - k; i++){
            bool isPalin = true;
            for(int j=0; j<k/2; j++){
                if(current[i+j] != current[i+k - j -1]){ isPalin = false; break; }
            }
            if(isPalin){
                containsPalin = true;
                break;
            }
        }
        if(!containsPalin){
            ++cnt;
        }
        return;
    }


    for (int i = 0; i < s.length(); ++i) {
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

        used[i] = true;
        current.push_back(s[i]);
        
        backtrack(s, current, used, k, cnt);
        used[i] = false;
        current.pop_back();
    }
}

void solve() {
    int n, k;
    string s,temp;
    cin>>n>>k>>s;
    sort(s.begin(), s.end());
    vector<bool> used(n, false);
    int cnt = 0;
    backtrack(s, temp, used, k, cnt);
    cout<<cnt<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
