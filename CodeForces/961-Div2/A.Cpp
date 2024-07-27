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

    // Generate Permutations
    for (int i = 0; i < s.length(); ++i) {
        if (used[i]) continue;

        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

        // Include this character
        used[i] = true;
        current.push_back(s[i]);
        
        backtrack(s, current, used, k, cnt);
        used[i] = false;
        current.pop_back();
    }
}

void solve() {
    int n, k;
    cin>>n>>k;
    int cnt = 0;
    if(k == 0){ cout<<0<<endl; return; }
    if(k <= n){
        cout<<1<<endl;
        return;
    }

    int ans = 1;
    k -= n;
    n--;
    while(k > 0 && n >= 0){
        if(cnt > 1){ n--; cnt = 0; }
        else cnt++;
        k -= n;
        ans++;
    }

    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
