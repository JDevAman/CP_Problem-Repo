// Upsolved Question
// Given an array a of n positive integers.
// In one operation, you can pick any pair of indexes (i,j) such that ai and aj have distinct parity, then replace the smaller one with the sum of them.
// Find the minimum number of operations needed to make all elements of the array have the same parity.

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
typedef vector<int> vli;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    vector<int> evens;

    int maxOddNumber = -1;
    int ans = 0, oddLen = 0, evenLen = 0;
    for (auto it : nums)
    {
        if (it & 1)
        {
            maxOddNumber = max(it, maxOddNumber);
        }
        else
        {
            evenLen++;
            evens.push_back(it);
        }
    }

    if (maxOddNumber == -1 || evenLen == 0)
    {
        cout << 0 << endl;
        return;
    }

    if (nums[n - 1] & 1)
    {
        cout << evenLen << endl;
        return;
    }

    for (auto it : evens)
    {
        if (maxOddNumber > it)
        {
            maxOddNumber += it;
            ans++;
        }
        else
        {
            cout << evenLen + 1 << endl;
            return;
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
