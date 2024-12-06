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

void coderAnsh(){
    int n, m;
    cin >> n >> m;

    vector<string> words(n);

    for(int i=0; i<n; ++i){
        string a;
        cin >> a;
        words[i] = a;
    }

    int num = 0;
    int taken = 0;

    for(int i=0; i<words.size(); ++i){
        if(taken+words[i].size()<=m){
            num++;
            taken+=words[i].size();
        }
        else{
            break;
        }
    }

    cout << num;
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