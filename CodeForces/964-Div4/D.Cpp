    #include <bits/stdc++.h>
    using namespace std;

    // #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;

    void solve() {
        string s, t; cin>>s>>t;

        int n = s.size(), m = t.size();
        int j = 0, i = 0;
        for(;i<n;){
            if(s[i] == t[j] || s[i] == '?'){
                s[i] = t[j]; j++;
            }
            i++;
            if(j == m) break;
        }

        if(i < n){
            for(;i<n; i++){
                if(s[i] == '?') s[i] = 'a';
            }
        }

        if(i == n){
            if(j == m) cout<<"YES\n"<<s<<endl;
            else cout<<"NO"<<endl;
        }
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int t;
        cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }
