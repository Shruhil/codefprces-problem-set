#include<bits/stdc++.h>
#define N 200010
#define int long long 
using namespace std; 
int T,n,sum,k,a[N],ans;
const int M=1e9+7;
int ksm(int u,int x)
{
	if(x==0)return 1;
	int uu=ksm(u,x/2);
	uu=uu*uu%M;
	if(x%2)uu=uu*u%M;
	return uu;
}

signed main()
{
	cin>>T;
	while(T--)
	{
		cin>>n;
		ans=sum=0;
		for(int i=1;i<=n;i++)
			cin>>a[i],sum=(sum+a[i])%M;
		for(int i=1;i<=n;i++)
			ans=(ans+((sum-a[i]+M)%M)*a[i])%M;
		cout<<(ans*ksm((n-1)*n%M,M-2))%M<<endl;
	}
    return 0;
}