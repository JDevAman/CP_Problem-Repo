#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int>
#define si set<int>
#define mi map<int,int>
#define pi pair<int, int>
# define yes cout<<"Yes"<<endl
# define no cout<<"No"<<endl

void cpp(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    lli l,r;
    cin>>l>>r;
    if(l == 1){
    	if(r != 1)
    		cout<<"Yes"<<endl;
    	else
    		cout<<"Invalid"<<endl;
		return;
    }
    else if(r == 1){
    	if(l != 1)
    		cout<<"No"<<endl;
    	else
    		cout<<"Invalid"<<endl;
		return;
    }
    else{
    	cout<<"Invalid"<<endl; 
    }
}

int main() {   
    cpp(); 
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}

