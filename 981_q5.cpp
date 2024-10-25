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
    vi arr(n);
    for(auto &x:arr){
        cin >> x;
    }

    int sz = (n+1)/2;
    vvi dp(sz, vi(2, 0));

    for(int i=1; i<sz; ++i){
        dp[i][0] = min(dp[i-1][0] + (arr[i]==arr[i-1]) + (arr[n-i]==arr[n-i-1]), dp[i-1][1] + (arr[i]==arr[n-i]) + (arr[n-i-1]==arr[i-1]));
        dp[i][1] = min(dp[i-1][0] + (arr[i]==arr[n-i]) + (arr[i-1]==arr[n-i-1]), dp[i-1][1] + (arr[i]==arr[i-1]) + (arr[n-i]==arr[n-i-1]));
    }

    int minDist = min(dp[sz-1][0], dp[sz-1][1]);
    if(!(n%2)){
        minDist+=(arr[sz]==arr[sz-1]);
    }

    cout << minDist;
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