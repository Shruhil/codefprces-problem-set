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
// #define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

// special functions
//1. seive of eratosthenes

// constants
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795


int findMEX(const set<int>& s) {
    int mex = 0;
    while (s.find(mex) != s.end()) {
        ++mex;
    }
    return mex;
}

vector<int> assignValues(int n, int x, int y) {
    vector<int> a(n, -1);
    vector<set<int>> friends(n);
    
    for (int i = 0; i < n; ++i) {
        friends[i].insert((i + 1) % n);
        friends[i].insert((i - 1 + n) % n);
    }

    x--; y--;
    friends[x].insert(y);
    friends[y].insert(x);

    for (int i = 0; i < n; ++i) {
        set<int> neighborValues;
        for (int friendIndex : friends[i]) {
            if (a[friendIndex] != -1) {
                neighborValues.insert(a[friendIndex]);
            }
        }
        a[i] = findMEX(neighborValues);
    }

    return a;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> result = assignValues(n, x, y);
        for (int value : result) {
            cout << value << " ";
        }
        cout << "\n";
    }

    return 0;
}

