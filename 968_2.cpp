#include<bits/stdc++.h>
using namespace std;

void coderAnsh(){
    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0; i<n; ++i){
        cin >> arr[i];
    } 

    sort(arr, arr+n);
    
    cout << arr[n/2];
}


int main(){
    int t;
    cin >> t;

    while(t--){
        coderAnsh();
        cout << endl;
    }

    return 0;
}