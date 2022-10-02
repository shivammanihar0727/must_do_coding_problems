#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp)
{
	if(s.size()==0 || s.top()<=temp)
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
void Sort(stack<int> &s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp = s.top();
	s.pop();
	Sort(s);
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
	Sort(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
