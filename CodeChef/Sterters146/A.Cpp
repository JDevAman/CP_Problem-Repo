    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        vector<int> nums(3);
        for(int i=0; i<3; i++){
            cin>>nums[i];
        }
        int m; cin>>m;
        sort(nums.begin(), nums.end());

        if(nums[0] + m >= nums[1] || nums[1] + m >= nums[2]) yes;
        else no;
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
