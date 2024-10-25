#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define vvi vector<vector<int>>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1e9+7;

#define ll long long 
#define um unordered_map<int,int>
#define si set<int>
 
int dy[4] = {-1,0,1,0};
int dx[4] = {0,-1,0,1};



void coderAnsh(){
    int n;
    cin >> n;

    vi arr(n+1);
    for(int i=1; i<=n; ++i){
        cin >> arr[i];
    }

    vi preSum(n+1, 0);
    for(int i=1; i<=n; ++i){
        preSum[i] = arr[i] + preSum[i-1];
    }

    vi dp(n+1, 0);
    map<int,int> mp;
    mp[0] = 0;

    for(int i=1; i<=n; ++i){
        dp[i] = dp[i-1];
        if(mp.find(preSum[i])!=mp.end()){
            dp[i] = max(dp[i], dp[mp[preSum[i]]] + 1);
        }
        mp[preSum[i]] = i;
    }

    cout << dp[n];
}

int main(){
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