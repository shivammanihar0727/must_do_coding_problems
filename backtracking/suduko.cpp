#include<bits/stdc++.h>
using namespace std;
int grid[10][10];
int N=9;
bool isSafe(int i,int j,int n)
{
	cout<<"go";
	for(int k=0;k<n;k++)
	{
		if(grid[k][j]==n||grid[i][k]==n)//if any row and coloumn find to be the same number than return false 
		return false;
	}
	int s=sqrt(N);
	int rs=i-i%s;
	
	int cs=j-j%s;
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(grid[i+rs][j+cs]==n)
			return false;
		}
	}
	return true;
}
bool solve()
{
	cout<<"hello";
	int i,j;
	for(int i=0;i<N;i++)
	
		for(int j=0;j<N;j++)
			if(grid[i][j]==0)
			break;
	if(i==N&&j==N)
	return true;
	for(int n=1;n<=N;n++)
	{
		cout<<"bye";
		if(isSafe(i,j,n))
		{
			grid[i][j]=n;
			
				cout<<"1 ";
			if(solve())
			{
				cout<<"1 ";
			return true;	
			}
				
			grid[i][j]=0;
		}
		cout<<endl;
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cin>>grid[i][j];
			}
		}
		cout<<"hi\n";
		solve();
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				cout<<grid[i][j]<<" ";
			}
		}
		cout<<endl;
	
	}
}

