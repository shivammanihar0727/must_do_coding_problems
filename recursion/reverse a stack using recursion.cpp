#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp)
{
	if(s.size()==0)
	{
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	insert(s,temp);
	s.push(val);
	return;
}
void rev(stack<int> &s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp = s.top();
	s.pop();
	rev(s);
	insert(s,temp);
	return;
}
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		s.push(a[i]);
	}
	rev(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
