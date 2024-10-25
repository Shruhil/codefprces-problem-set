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

    if(is_sorted(arr.begin(), arr.end()) || is_sorted(arr.rbegin(), arr.rend())){
        cout << 0;
        return;
    }
    
    vi looked(n, 0);
    int minOp = 0;

    for(int i=0; i<n; ++i){
        if(!looked[i]){
            int len = 0;
            int j = i;

            while(!looked[j]){
                looked[j] = 1;
                j = arr[j]-1;
                len++;
            }

            if(len>=3){
                minOp+=(len-1)/2;
            }
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