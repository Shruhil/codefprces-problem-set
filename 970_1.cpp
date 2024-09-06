#include<bits/stdc++.h>
using namespace std;


void coderAnsh(){
    int a, b;

    cin >> a >> b;

    int sum = a+2*b;

    if(sum%2!=0){
        cout << "no";
    }

    else{
        if(a==0 && b%2!=0){
            cout << "no";
        }

        else{
            cout << "yes";
        }
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