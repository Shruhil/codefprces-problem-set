#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n, largest_odd = INT_MIN;
    cin >> n;

    vector<int> a(n);
    vector<int> even;

    for(int i=0; i<n; ++i){
        cin >> a[i];
    }

    for(int i=0; i<n; ++i){
        if(a[i] & 1) largest_odd = max(largest_odd, a[i]);
        else even.push_back(a[i]);
    }

    if(largest_odd == INT_MIN || even.size() == 0){
        cout << 0 << endl;
        return;
    }


    sort(even.begin(), even.end());

    int num_op = even.size();
    for(int i=0; i< (int)even.size(); ++i){
        if(largest_odd < even[i]){
            cout << num_op+1 << endl;
            return;
        }

        largest_odd+=even[i];
        if(largest_odd > even.back()){
            cout << num_op << endl;
            return;
        }
    }
}


int main(){
    int t;
    cin >> t;

    while(t--){
        coderAnsh();
    }
}

