
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
