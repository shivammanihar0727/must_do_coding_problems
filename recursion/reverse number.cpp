#include<bits/stdc++.h>
using namespace std;
int ar[100001];

void reverse(int i,int j)
{
 	if(i<j)
 	{
 		swap(ar[i],ar[j]);
 		reverse(i+1,j-1);
	 }	
}
int main()
{
	int n,m;
	cin>>n;
	int c=0,nn=n;
	while(n!=0)
	{
		
		ar[c]=n%10;
		c++;
		n=n/10;
	}
	for(int i=0;i<c;i++)
	{
		cout<<ar[i];
	}
//	cout<<endl<<c;
//	m=0;
//	reverse(m,c-1);
//	for(int i=0;i<c;i++)
//	{
//		cout<<ar[i];
//	}
}
