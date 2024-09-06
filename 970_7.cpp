#include<bits/stdc++.h>
using namespace std;

#define lli long long int
#define vi vector<int> 

void coderAnsh(){
    lli n,k;
    cin>>n>>k;
    
    vi a(n);
    for(auto &x:a)
        cin>>x;
 
    if(n==1){
        if((lli)a[0]<k)
            cout<<k<<endl;
        else
            cout<<k-1<<endl;
        continue;
    }
 
    lli g=a[0];
    for(const auto &x:a)
        g=__gcd(g,(lli)x);
 
    vi rest(n);
    for(lli j=0;j<n;j++)
        (lli)rest[j]=j*g;
 
    lli cnt = 0;
    for(lli j=k;;j++){
        while(cnt<n&&rest[cnt]<=j)
            cnt++;
 
        const lli missingCnt = (j+1)-cnt;
        if(missingCnt==k){
            cout<<j<<endl;
            break;
        }
    }
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