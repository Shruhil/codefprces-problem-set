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

    int w_max = -1e9;
    int h_max = -1e9;

    for(int i=0; i<n; ++i){
        int x1, x2;
        cin >> x1 >> x2;

        w_max = max(w_max, x1);
        h_max = max(h_max, x2);
    }

    int minPer = 2*(w_max+h_max);
    cout << minPer;
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
