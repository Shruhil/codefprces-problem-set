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


void coderAnsh() {
    int n;
    cin >> n;

    vvi arr(n, vi(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> arr[i][j];
        }
    }s

    int minOp = 0;
    vi helper(2*n-1, 0);

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            helper[i-j+n-1] = min(helper[i-j+n-1], arr[i][j]); 
        }
    }

    for(int i=0; i<helper.size(); ++i){
        if(helper[i] < 0){
            minOp-=helper[i];
        }
    }
    cout << minOp;
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