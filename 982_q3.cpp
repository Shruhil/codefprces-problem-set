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

void dfs(ll n, ll len, map<ll,bool> &vis, map<ll, vll> &mp, ll &maxLen){
    vis[len] = 1;
    maxLen = max(maxLen, len);

    for(auto it:mp[len-n]){
        if(!vis[len+it-1]){
            dfs(n, len+it-1, vis, mp, maxLen);
        }
    }
}

void coderAnsh(){
    ll n;
    cin >> n;

    map<ll, bool> vis;
    map<ll,vll> mp;

    for(int i=1; i<=n; ++i){
        ll x;
        cin >> x;
        x-=(n-i+1);

        if(i > 1){
            mp[x].push_back(i);
        }
    }

    ll maxLen = 0;
    dfs(n, n, vis, mp, maxLen);
    cout << maxLen;

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