    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   

    void solve() {
        int q; cin>>q;
        map<int, int> balls;

        for(int i=0; i<q; i++){
            int x, ball;cin>>x;
            if(x == 1 || x == 2){
                cin>>ball;
                if(x == 1){
                    balls[ball]++;
                }
                else{
                    balls[ball]--;
                    if(balls[ball] == 0) balls.erase(ball);
                }
            }
            else cout<<balls.size()<<endl;
            
        }
    }

    signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int t = 1;
        // cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }