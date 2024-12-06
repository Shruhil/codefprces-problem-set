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

// constants
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

void coderAnsh() {
    string n;
    cin >> n;

    ll cnt2 = 0, cnt3 = 0;
    ll sum = 0;

    for(auto &ch:n){
        sum+=(ch-'0');

        if(ch=='2') cnt2++;
        if(ch=='3') cnt3++;
    }

    ll tar = (-sum)%9;
    if(tar<0){
        tar+=9;
    }

    bool isPossible = 0;

    for(int b=0; b<=2 && b<=cnt3; ++b){
        ll temp = tar-6*b;

        ll rem = (5*temp)%9;
        if(rem<0) rem+=9;

        if(rem<=cnt2){
            isPossible = 1;
            break;
        }
    }

    if (isPossible) {
        cout << "YES";
    } else {
        cout << "NO";
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