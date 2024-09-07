#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n;
    cin >> n;
    
    string rbs;
    cin >> rbs;

    stack<int> st;
    int minCost = 0;

    for(int i=0; i<n; ++i){
        char ch = rbs[i];

        if(ch == '_'){
            ch = st.empty() ? '(' : ')'; 
        }

        if(ch=='('){
            st.push(i);
        }

        else{
            minCost+=(i-st.top());
            st.pop();
        }
    }

    cout << minCost << endl;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        coderAnsh();
    }

    return 0;
}