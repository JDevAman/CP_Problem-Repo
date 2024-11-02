#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
# define yes cout<<"Yes"<<endl
# define no cout<<"No"<<endl

void haribhakt(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n; cin>>n;
    int minEle = 1001 , maxEle = 0;
    // IF
    // How? We will set min and max at start by shuffling which will make step where max[i] & min[i] equal.
    for(lli i=0; i<n; i++){
        int x; cin>>x;
        minEle = min(minEle, x);
        maxEle = max(maxEle, x);
    }
    cout<<((maxEle-minEle) * (n-1))<<endl;
}

int main() {   
    cpp(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

