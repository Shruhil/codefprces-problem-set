#include<bits/stdc++.h>
using namespace std;
#define int long long 

void coderAnsh(){
    int n;
    cin >> n;

    vector<int> ans(n, 0);
    vector<bool> vis(n, 0);
    string s;
    vector<int> p(n);

    for(int i=0; i<n; ++i){
        cin >> p[i];
        p[i]--;
    }

    
    cin >> s;

    for(int i=0; i<n; ++i){
        if(!vis[i]){
            vector<int> cycle;
            int x = i;
            int black_cnt = 0;

            while(!vis[x]){
                vis[x] = true;

                cycle.push_back(x);

                if(s[x]=='0'){
                    black_cnt++;
                }

                x = p[x];
            }

            for(int ind:cycle){
                ans[ind] = black_cnt;
            }
        }
    }

    for(int i=0; i<n; ++i){
        cout << ans[i] <<" ";
    }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int t;
    cin >> t;

    while(t--){
        coderAnsh();
        cout << endl;
    }

    return 0;
}