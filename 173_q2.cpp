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

void coderAnsh() {
    ll n,d;
    cin >> n >> d;

    vector<int> ans;
    ans.pb(1);

    for(int i=3; i<=9; i+=2){
        ll num = d;
        int len = 1;
        bool flag = 1;

        while(num%i){
            num*=10;
            num+=d;
            num%=i;
            len++;

            if(len>=i+1){
                flag = 0;
                break;
            }
        }

        if(!flag) continue;

        if(n>=len){
            ans.pb(i);
        }

        else{
            ll val = 1;
            for(int j=1; j<=n; ++j){
                val*=j;
            }

            if(val%len==0){
                ans.pb(i);
            }
        }
    }

    for(auto &val:ans){
        cout << val << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        coderAnsh();
        cout << endl;
    }

    return 0;
}
