#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n;
    cin >> n;

    int a[n], b[n];

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    for(int i=0; i<n; ++i){
        cin >> b[i];
    }

    bool flag = true;
    for(int i=0; i<n; i++){
        if(a[i]==b[i]) continue;
        else flag = false;
    }

    for(int i=0; i<n; ++i){
        if(a[i]==b[n-i-1]) continue;
        else flag = false;
    }

    if(flag) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        coderAnsh();
    } 

    return 0;
}
