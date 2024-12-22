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

    string s;
    cin >> s;

    vector<int> p(n, INT_MAX); // To store the prefix minimum for 'p'
    vector<int> s_arr(n, INT_MAX); // To store the suffix minimum for 's'
 
    // Step 1: Assign values for 'p' and 's'
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'p') {
            p[i] = i + 1; // p[i] should be i + 1 (1-based index)
        }
        if (s[i] == 's') {
            s_arr[i] = n - i; // s[i] should be n - i
        }
    }
 
    // Step 2: Propagate forward in s_arr to ensure suffix min constraint
    for (int i = 1; i < n; ++i) {
        s_arr[i] = min(s_arr[i], s_arr[i - 1]);
    }
 
    // Step 3: Propagate backward in p to ensure prefix min constraint
    for (int i = n - 2; i >= 0; --i) {
        p[i] = min(p[i], p[i + 1]);
    }
 
    // Step 4: Create the temp array with the minimum of p[i] and s_arr[i]
    vector<int> temp(n);
    for (int i = 0; i < n; ++i) {
        temp[i] = min(s_arr[i], p[i]);
    }
 
    // Step 5: Sort the temp array
    vector<int> sorted_temp = temp;
    sort(sorted_temp.begin(), sorted_temp.end());
 
    // Step 6: Check if sorted_temp[i] >= i + 1 for all i
    for (int i = 0; i < n; ++i) {
        if (sorted_temp[i] < i + 1) {
            cout << "NO"; // If any element fails the condition, return false
            return;
        }
    }
 
    cout << "YES";
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