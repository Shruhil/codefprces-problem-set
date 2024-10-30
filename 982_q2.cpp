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

    ll minRem = LLONG_MAX;

    for(int i=0; i<n; ++i){
        ll temp = i;
        for(int j=i+1; j<n; ++j){
            if(arr[j] > arr[i]){
                temp++;
            }
        }

        minRem = min(minRem, temp);
    }

    cout << minRem;
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