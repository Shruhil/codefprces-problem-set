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

void coderAnsh(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    for(auto &x:a){
        cin >> x;
    }

    for(auto &x:b){
        cin >> x;
    }

    map<ll, ll> diff_rating;
    map<ll, ll> diff_cust;

    for(auto &ct:a){
        diff_rating[ct]++;
    }

    for (auto &ct : b) {
        diff_rating[ct]--;
        diff_cust[ct]--; 
    }

    ll maxProfit = 0, num_buy = n, neg_rev = 0;

    for (auto &[price, rating] : diff_rating) {
        if (neg_rev <= k) {
            ll currProfit = price * num_buy;
            maxProfit = max(maxProfit, currProfit);
        }

        neg_rev += rating;          
        num_buy += diff_cust[price]; 
    }

    cout << maxProfit;
    return;
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