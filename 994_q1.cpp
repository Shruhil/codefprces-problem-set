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
    int n;
    cin >> n;
    vi arr(n);

    bool flag = 1;
    for(auto &x:arr){
        cin >> x;
        if(x) flag = 0;
    }   

    if(flag){
        cout << 0;
        return;
    }

    int i = 0;
    int num = 0;
    int zeroes = 0;
    while(i<n){
        if(arr[i]==0){
            i++;
            zeroes++;
        }

        else if(arr[i]!=0){
            while(i<n && arr[i]!=0){
                i++;
            }
            num++;
        }
    }

    if(num>=2){
        if(zeroes==0){
            cout << 1;
            return;
        }
        else {
            cout << 2;
            return;
        }
    }

    else if(num==1){
        cout << 1;
        return;
    }
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