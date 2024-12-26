#include<bits/stdc++.h>
using namespace std;

// data structures
#define vi vector<int>
#define vvi vector<vector<int>>
#define um unordered_map<int,int>
#define pi pair<int,int>
#define us unordered_set<int>
#define st stack<int>
#define qu queue<int>
#define si set<int>
#define sc set<char>

// data types
#define ll long long 
#define ull unsigned long long
#define do double

// functions
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

// special functions
//1. seive of eratosthenes

// constants
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

ll calCoins(ll n){
    if(n<=3){
        return 1;
    }

    ll ans = 2*calCoins(n/4);
    return ans;
}
void coderAnsh(){
    ll n;
    cin >> n;

    if(n<4){
        cout << 1;
        return;
    }

    if(n==4){
        cout << 2;
        return;
    }

    ll coins = calCoins(n);
    cout << coins;
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