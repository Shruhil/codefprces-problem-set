#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n;
    string s;

    cin >> n >> s;

    int x = sqrt(n);

    int conv = x*x;
    if(conv!=n){
        cout << "no";
        return;
    }

    bool isBeau = true;

    for(int i=0; i<x; ++i){
        for(int j=0; j<x; ++j){
            int ind = i*x + j;

            if(i==0 || i==x-1 || j==0 || j==x-1){
                if(s[ind]!='1'){
                    isBeau = false;
                    break;
                }
            }

            else{
                if(s[ind]!='0'){
                    isBeau = false;
                    break;
                }
            }
        }

        if(!isBeau) break;
    }

    if(isBeau){
        cout << "yes";
        return;
    }

    else{
        cout << "no";
        return;
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