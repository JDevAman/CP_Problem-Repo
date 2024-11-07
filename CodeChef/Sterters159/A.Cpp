    #include <bits/stdc++.h>
    using namespace std;

    #define int long long
    #define yes cout << "Yes" << endl
    #define no cout << "No" << endl
    typedef vector<int> vli;
   
    void solve() {
        int n, x; cin>>n>>x;
        vli difference(n, 0);
        for(int i=0; i<n; i++){
            cin>>difference[i];
        }
        int aWins = 0;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for(int i=0; i<n; i++){
            int bVotes; cin>>bVotes;
            difference[i] -= bVotes;
            if(difference[i] > 0) aWins++;
            if(difference[i] <= 0){
                minHeap.push(abs(difference[i]) + 1);
            }
            
        }
        
        // Min Heap
        while(!minHeap.empty() && x > 0){
            int top = minHeap.top();
            minHeap.pop();
            if(x >= top){
                aWins++;
                x -= top;
            }
            else break;
        }
        
        if(aWins >= (n+1)/2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int t;
        cin >> t;
        while (t--) {
            solve();
        }
        return 0;
    }