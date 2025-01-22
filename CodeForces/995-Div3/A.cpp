#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define si set<int>
#define mi map<int, int>
#define pi pair<int, int>

#define pq_min priority_queue<int, vector<int>, greater<int>> 
#define pq_max priority_queue<int>

#define yes cout << "Yes" << endl
#define no cout << "No" << endl

void haribhakt_fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


void solve() {
	int n; cin>>n;
	vector<int> a(n),b(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}

	if(n == 1){
		cout<<a[0]<<endl;
		return;
	}

	int ans = a[n-1];
	for(int i=n-2; i>=0; i--){
		if(a[i] > b[i+1]) ans += (a[i] - b[i+1]);
	}
	cout<<ans<<endl;
}

signed main() {   
    haribhakt_fastio(); 
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
