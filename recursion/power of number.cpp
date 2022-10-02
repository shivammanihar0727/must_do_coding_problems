#include<bits/stdc++.h>
using namespace std;
int power(int m,int n)
{

	if(n==0)
	{
		return 1;
	}
	if(n%2==0)
	return power(m,n/2)*power(m,n/2);
	else
	return m*power(m,n/2)*power(m,n/2);	
}
int main()
{
	int n,m;
	cin>>m>>n;
	cout<<power(m,n);
}
