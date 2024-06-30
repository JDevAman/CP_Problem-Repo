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

    // Optional comparator function for sorting pairs
    bool comp(const pli & a,
        const pli & b) {
        if (a.F == b.F) {
            return a.S < b.S;
        } else {
            return a.F < b.F;
        }
    }

    int checkGreater(vector<vector<int>>& grid, int x, int y, int n, int m){
        int dx[] = {0, 1, 0 , -1}, dy[] = {1, 0, -1, 0};
        int maxPossible = INT_MIN;
        for(int i=0; i<4; i++){
            int newRow = x+dx[i], newCol = y+dy[i];
            if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m){
                if(grid[x][y] > grid[newRow][newCol]) maxPossible= max(maxPossible, grid[newRow][newCol]);
                else return -1;
            }
        }
        return maxPossible;
    }

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
        int n; cin>>n;
        vector<int> a(n), b(n);
        int aRating = 0, bRating = 0, neg = 0, pos = 0;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        for(int i=0; i<n; i++){
            cin>>b[i];
            if(a[i] > b[i]) aRating += a[i];
            else if(b[i] > a[i]) bRating += b[i];
            else{
                neg += (a[i] < 0);
                pos += (a[i] > 0);
            }
        }

        int ans = INT_MIN;

        // Trying to Find Optimal Solution
        for(int i= -neg; i<=pos; i++){
            ans = max(ans, min(aRating + i, bRating + pos - neg - i));
        }

        cout<<ans<<endl;
    }

    signed main() {     
        //make input output fast
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        // sieve();

        int t = 1;
        cin >> t;
        while (t--)
            solve();
        return 0;
    }