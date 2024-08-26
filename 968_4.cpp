#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void coderAnsh(){
    ll n;
    ll m;
    cin >> n >> m;

    ll var = 0;
    set<ll> s;

    for(ll i=0; i<n; ++i){
        ll len;
        cin >> len;

        while(len--){
            ll num;
            cin >> num;
            s.insert(num);
        }

        ll y = 0;
        ll num = 0;
        while(true){
            if(s.find(num)==s.end()){
                if(y==0) y=1;

                else{
                    var = max(var, num);
                    break;
                }  
            }
            num++;
        }

        s.clear();   
    }

    if(var>=m){
        cout << (m+1)*var;
    }

    else{
        cout << var*(var+1) + ((m*(m+1))/2) - (var*(var+1))/2;
    }
}


int main(){
    ll t;
    cin >> t;

    while(t--){
        coderAnsh();
        cout << endl;
    }

    return 0;
}