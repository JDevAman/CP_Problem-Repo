    #include <bits/stdc++.h>
    using namespace std;

    // Type Aliases
    #define int long long
    #define vi vector<int>
    #define si set<int>
    #define mi map<int, int>
    #define pi pair<int, int>

    // Utility Aliases
    #define pq_min priority_queue<int, vector<int>, greater<int>> 
    #define pq_max priority_queue<int>

    // Output Shorthand
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl

    void haribhakt_fastio() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }

    void solve() {
        int n; cin>>n;
        vector<long double> nums(n);
        long double r = -1;
        for(int i=0; i<n; i++){
            cin>>nums[i];
            if(i > 0){
                if(i == 1) r = nums[i]/nums[i-1];
                else{
                    long double num = nums[i]/nums[i-1];
                    if(r != num){
                        no; return;
                    }
                }
            }
        }
        yes;
    }

    signed main() {   
        haribhakt_fastio(); 
        int t = 1;
        // cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }