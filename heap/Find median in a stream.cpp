#include<bits/stdc++.h>
using namespace std;
typedef double ll;

int main()
 {
	long n;
	cin>>n;
	long ar[n],i;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	priority_queue<ll,vector<ll>,greater<ll> > mn;
	priority_queue<ll> mx;
	ll med,x;
	fflush(stdin);
	med=ar[0];
	mx.push(ar[0]);
	cout<<med<<"\n";
	for(i=1;i<n;i++)
	{
		x=ar[i];
		if(mx.size()>mn.size())
		{
			if(x<med)
			{
				mn.push(mx.top());
				mx.pop();
				mx.push(x);
			}
			else
			{
				mn.push(x);
			}
			med=(mn.top()+mx.top())/2.0;
			
			
		}
		else if(mx.size()==mn.size())
		{
			if(x<med)
			{
				mx.push(x);
				med=mx.top();
			}
			else
			{
				
				mn.push(x);
				med=mn.top();
			}
		}
		else 
		{
			if(x>med)
			{
				mx.push(mn.top());
				mn.pop();
				mn.push(x);
			}
			else
			{
				mx.push(x);
			}
			med=(mn.top()+mx.top())/2;
			
		}
		cout<<med<<"\n";
	}
	
	
	return 0;
}
