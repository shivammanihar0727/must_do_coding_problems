#include<bits/stdc++.h>
using namespace std;
void solve(string s,string op)
{
	
	if(s.length()==0)
	{
		cout<<op<<" ";
		return;
	}
	string op1=op;
	string op2=op;
	op2.push_back(s[0]);
	s.erase(s.begin()+0);
	
	
	solve(s,op1);
	solve(s,op2);
	return;
}
int main()

{
	
	string s,op;
	cin>>s;
	op="";
	cout<<" ";
	solve(s,op);
	
	
}
