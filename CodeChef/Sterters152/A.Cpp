    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   
    void solve() {
        int m, p;
        cin>>m>>p;
        int reqdTime = 1000 - (m + p);
        int ans = reqdTime/21;
        cout<<min(ans, 299-m)<<endl;
    }

    signed main() {
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
