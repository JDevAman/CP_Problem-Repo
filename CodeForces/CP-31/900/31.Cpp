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

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int factors(int num, int div){
    int cnt = 0;
    while(num % div == 0){
        if(num%div == 0){ num /= div; cnt++; }
        else break;
    }
    return cnt;
}
void solve() {
    int n; cin>>n;
    if(n == 1){
        cout<<0<<endl;
        return;
    }
    int digitSum = 1 + (n-1)%9;
    if(digitSum % 3 != 0){
        cout<<-1<<endl;
        return;
    }
    int twoCnt = factors(n, 2), threeCnt = factors(n, 3);
    int prod = pow(2, twoCnt) * pow(3, threeCnt);
    if(prod != n || twoCnt > threeCnt){
        cout<<-1<<endl;
        return;
    }
    cout<< 2*(threeCnt) - twoCnt<<endl;
}

signed main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
