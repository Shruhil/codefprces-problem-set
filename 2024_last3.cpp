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
#define f(i,s,e) for(long long int i=s;i<e;i++)
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

ll calcLuck(pair<ll, ll> p, ll mid){
    ll ans = 0;
    ans+=(p.second*mid + mid + 2*p.first);

    return ans;
}

ll calcSeg(pair<ll, ll> p, ll mid){
    ll ans = 0;
    ans+=(2*p.second + 1);

    return ans;
}

ll calcLuck2(pair<ll, ll> p, ll mid){
    ll ans = 0;
    ans+=(p.second*mid + 2*p.first);

    return ans;
}

ll calcSeg2(pair<ll, ll> p, ll mid){
    ll ans = 0;
    ans+=(2*p.second);

    return ans;
}


pair<ll,ll> merge(ll low, ll high, ll k){
    ll luck = 0, seg = 0;

    if(high-low+1 < k) return {0,0};
    if(high-low+1==1) return {low, 1};

    ll len = high-low+1;
    ll mid = (high+low) >> 1;

    if(!(len & 1)){
        pair<ll, ll> curr = merge(low, mid, k);

        luck = calcLuck2(curr, mid);
        seg = calcSeg2(curr, mid);
    }

    else{
        pair<ll, ll> curr = merge(low, mid-1, k);

        luck = calcLuck(curr, mid);
        seg = calcSeg(curr, mid);
    }

    
    return {luck, seg};
}

void coderAnsh(){
    ll n, k;
    cin >> n >> k;

    ll luck = merge(1, n, k).first;

    cout << luck;
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