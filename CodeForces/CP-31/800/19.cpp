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
    int posCnt = 0, negCnt = 0;
    // Negative & Positive Count
    for(int i=0; i<n; i++){
    	int x; cin>>x;
    	if(x == -1) negCnt++;
    	else posCnt++;
    }
    if(posCnt >= negCnt){
    	if(negCnt&1) cout<<1<<endl;
    	else cout<<0<<endl; 
    	return;
    }
    else{
    	// posCnt < negCnt
    	int diff = negCnt - posCnt;
		int minReqd = (diff+1)/2;	
    	if(negCnt & 1){
    		// find (diff/2)
    		if(!(minReqd & 1)) minReqd++;
    		// odd -ve count - odd diff, even diff
    		cout<<minReqd<<endl;
    		return;
    	}
    	else{
    		// even -ve count - odd diff, even diff
    		if(minReqd & 1) minReqd++;
    		cout<<minReqd<<endl;
    		return;
    	}

    }
    // 
}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}