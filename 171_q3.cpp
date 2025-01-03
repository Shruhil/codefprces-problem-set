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
    string s;
    cin >> s;

    ll minMoney = 0;

    int cnt = 0;
    for(int i=n-1; i>=0; --i){
        if(cnt>=i){
            minMoney+=(i+1);
            cnt--;
            continue;
        }

        if(s[i]=='1'){
            cnt++;
        }

        else{
            minMoney+=(i+1);
            cnt--;

            if(cnt < 0){
                cnt = 0;
            }
        }
    }

    cout << minMoney; 
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