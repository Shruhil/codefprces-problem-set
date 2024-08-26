#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n;
    string s;

    cin >> n >> s;

    if(s[0]==s[n-1]){
        cout << "No" << endl;
    }

    else cout << "yes" << endl;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        coderAnsh();
    }

    return 0;
}