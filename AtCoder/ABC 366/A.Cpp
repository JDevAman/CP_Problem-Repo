    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        int n, t,a; cin>>n>>t>>a;
        if(2*t >= n+1 || 2*a >= n+1)  cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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