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
#define minHeap priority_queue<int,vector<int>,greater<int>>
#define maxHeap priority_queue<int>

// data types
#define ll long long 
#define ull unsigned long long
#define do double

// functions
#define f(i,s,e) for(int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

// special functions
//1.gcd
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

//2.lcm
int lcm(int a, int b)
{
    return ((a / gcd(a, b)) * b);
}

//3. seive of eratosthenes
void seive(){
    int limit = 1e5;
    vector<bool> is_prime(limit+1, true);
    
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i] && (long long)i * i <= limit) {
            for (int j = i * i; j <= limit; j += i)
                is_prime[j] = false;
        }
    }
}

// constants
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define MAX 1e5;
#define MIN -1*1e5;

void coderAnsh(){
    int n;
    cin >> n;

    um freq;
    si s;
    vector<pi> arr(n);
    for(int i=0; i<n; ++i){
        int a, b;
        cin >> a >> b;


        if(a==b){
            freq[a]++;
            s.insert(a);
        }

        arr[i].first = a;
        arr[i].second = b;
    }

    string str = "";
    vector<int> temp(s.begin(), s.end());

    for(int i=0; i<n; ++i){
        int l = arr[i].first, h = arr[i].second;

        if(l==h){
            if(freq[l] > 1){
                str.pb('0');
            }

            else{
                str.pb('1');
            }
        }

        else{
            int lb = lower_bound(temp.begin(), temp.end(), l) - temp.begin();
            int hb = lower_bound(temp.begin(), temp.end(), h+1) - temp.begin();

            int num_fix = hb-lb;
            int total = h-l+1;

            if(num_fix!=total){
                str.pb('1');
            }

            else{
                str.pb('0');
            }
        }
    }

    cout << str;
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