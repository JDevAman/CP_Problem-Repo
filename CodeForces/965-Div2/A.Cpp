    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        int xc, yc, k;
        cin>>xc>>yc>>k;

        if(k & 1) cout<<xc<<" "<<yc<<endl;

        int temp = k/2, diff = 1;
        while(temp){
            cout<<xc-diff<<" "<<yc-diff<<endl;
            diff += 2;
            temp--;
        }

        temp = k/2, diff = 1;
        while(temp){
            cout<<xc+diff<<" "<<yc+diff<<endl;
            diff += 2;
            temp--;
        }
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