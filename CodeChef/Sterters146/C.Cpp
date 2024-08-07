    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        int n; cin>>n;
        vector<int> height(n), prefix(n), postFix(n);
        for(int i=0; i<n; i++){
            cin>>height[i];
        }

        int ans=0; prefix[0] = 0; postFix[n-1] = 0;
        for(int i=1; i<n; i++){
            prefix[i] = prefix[i-1] + height[i-1];
            postFix[n-i-1] = postFix[n-i] + height[n-i]; 
        }


        for(int i=0; i<n; i++){
            if(height[i] == 0){
                if(prefix[i] == postFix[i]) ans += 2;
                else if((prefix[i] == postFix[i] - 1 )  || (prefix[i] ==  postFix[i] + 1)) ans++;
            }
        }


        cout<<ans<<endl;
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