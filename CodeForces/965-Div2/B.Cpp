    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        int n; cin>>n;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            if(x != 1) cout<<x- 1<<" ";
            else cout<<n<<" ";
        }
        cout<<endl;
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