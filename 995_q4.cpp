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
    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> arr(n);

    for (auto &val : arr) {
        cin >> val;
    }

    ll sum = accumulate(arr.begin(), arr.end(), 0ll);
    x = sum-x;
    y = sum-y;

    ll num = 0;
    sort(arr.begin(), arr.end());
    
    for(int i=0; i<n; ++i){
        ll val1 = x-arr[i];
        ll val2 = y-arr[i];

        ll low = lower_bound(arr.begin(), arr.end(), val2) - arr.begin();
        ll high = upper_bound(arr.begin(), arr.end(), val1) - arr.begin();

        if(i>=low && i<high){
            num--;
        }

        num+=max(0ll, (high-low));
    }

    cout << num/2;
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