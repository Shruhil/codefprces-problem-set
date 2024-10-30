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
    ll n;
    cin >> n;
    vll arr(n);
    for(auto &x:arr){
        cin >> x;
    }

    if(n==1){
        cout << 1;
        return;
    }

    sort(arr.begin(), arr.end());

    if(n%2==0){
        ll minK = arr[1] - arr[0]; 
        for(ll i=2; i<n; i+=2){
            minK = max(minK, arr[i+1]-arr[i]);
        }

        cout << minK;
        return;
    }

    else{
        ll minK = 1e18;

        for(ll i=0; i<n; ++i){
            vll temp;

            for(ll j=0; j<n; ++j){
                if(j==i) continue;

                temp.push_back(arr[j]);
            }

            ll poss = temp[1] - temp[0];
            for(ll j=2; j<n-1; j+=2){
                poss = max(poss, arr[j+1] - arr[j]);
            }

            minK = min(minK, poss);
        }

        cout << minK;
        return;
    }
    
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