#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

void cpp() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int substringCnt(string& s, int i){
    if(i >= 0 && i+2 < s.size()){
        return (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') ? 1 : 0;
    }
    return 0;
}

void solve() {
    int n,q; cin>>n>>q;
    string s; cin>>s;

    int total = 0;
    for(int i=0; i<n-2; i++){
        total += substringCnt(s,i);        
    }
    for(int i=0; i<q; i++){
        int x; cin>>x;
        char ch; cin>>ch;
        x--;

        for(int j=x-2; j<=x; j++){
            total -= substringCnt(s, j);
        }
        s[x] = ch;
        for(int j=x-2; j<=x; j++){
            total += substringCnt(s, j);
        }
        cout<<total<<endl;
    }
}

int main() {
    cpp();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
