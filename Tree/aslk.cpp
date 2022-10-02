#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		lli i,j,ans,n,k,c=0,rem,rev=0;
		cin>>n;
		vector<int> v;
		lli nn=n;
		i=0;
		while(nn!=0)
		{
			rem=nn%10;
			if(rem==0)
			{
				
				nn/=10;
			}
			else
			{
				
				ans=rem*pow(10,i);
				//cout<<ans;
				v.push_back(ans);
				nn/=10;	
			}
			i++;
		}
		cout<<v.size();
		cout<<endl;
		for(i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
