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
    int n, m, k;
    cin >> n >> m >> k;

    vi a(m), b(k);

    for(auto &x:a){
        cin >> x;
    }

    unordered_map<int,bool> is_known;
    for(auto &x:b){
        cin >> x;
        is_known[x] = 1;
    }

    int un = n-k;
    if(un==0){
        string str = "";
        for(int i=1; i<=m; ++i){
            str.push_back('1');
        }

        cout << str;
        return;
    }

    if(un>1){
        string str = "";
        for(int i=1; i<=m; ++i){
            str.push_back('0');
        }

        cout << str;
        return;
    }

    string str = "";
    
    for(int i=0; i<m; ++i){
        int c = a[i];
        
        if(is_known.find(c)!=is_known.end()){
            str.push_back('0');
        }

        else{
            str.push_back('1');
        }
    }
    
    cout << str;
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