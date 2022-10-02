#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> z_algo(string str)
{
	ll len=str.length();
	ll l=0,r=0;
	vector<ll> z(len);
	for(ll i=1;i<len;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<len and str[r]==str[r-l])
			r++;
			z[i]=r-l;
			r--;
		}
		else
		{
			ll idx=i-l;
			if(i+z[idx]<=r)
			z[i]=z[idx];
			else
			{
				l=i;
				while(r<len&&str[r]==str[r-l])
				r++;
				z[i]=r-l;
				r--;
			}
		}
	}
	return z;
}
int main()
{
	string str,pat;
	cin>>str;
	cin>>pat;
	string tot=pat+"$"+str;
	vector<ll> z=z_algo(tot);	
	ll c=0;
	for(ll i=0;i<z.size();i++)
	{
		if(z[i]==pat.length())
		{
			c++;
		}
	}
	cout<<c;
}
