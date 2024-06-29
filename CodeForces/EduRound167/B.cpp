    #include<bits/stdc++.h>

    using namespace std;

    #define F first
    #define S second
    #define PB push_back
    #define POB pop_back
    #define MP make_pair
    #define int long long
    #define double long double
    #define read(x) int x; cin >> x
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef unordered_map < int, int > mli;
    typedef vector < int > vli;
    typedef pair < int, int > pli;

    int findLCS(string &a, string &b) {
        int n = a.size();
        int m = b.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int mx = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i - 1] == b[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                } else {
                    // Find LCS
                    // dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                    //  Find subsequence from a which equals substring from b
                    dp[i][j] = dp[i - 1][j];
                }
                mx = max(mx, dp[i][j]);
            }
        }
        //For LCS
        // return dp[n][m];
        // For Subsequence and Substring
        return n + m -mx;
    }

    void solve() {
        string a, b;
        cin >> a >> b;
        int mx = findLCS(a, b);
        cout << mx << endl;
    }

    signed main() {     
        //make input output fast
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int t = 1;
        cin >> t;
        while (t--)
            solve();
        return 0;
    }