    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        vector<int> nums(16), sorted(16);
        for(int i=0; i<16; i++){
            cin>>nums[i];
            sorted[i] = nums[i];
        }
        sort(sorted.begin(),sorted.end());

        for(auto it:  nums){
            int index = upper_bound(sorted.begin(), sorted.end(), it) - sorted.begin();
            index -= 1;
            if(index < 1) cout<<0<<" ";
            else if(index < 3) cout<<1<<" ";
            else if(index < 7) cout<<2<<" ";
            else if(index < 15) cout<<3<<" ";
            else cout<<4<<" ";
        }
        cout<<endl;
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
