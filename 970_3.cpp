#include<bits/stdc++.h>
using namespace std;
#define int long long

void coderAnsh(){
    int l, r;
    cin >> l >> r;

    int start = l, diff = 1;
    int maxLen = 0;
    
    while(start <= r){
        start+=diff;
        diff++;
        maxLen++;
    }

    cout << maxLen;
}


int32_t main(){
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