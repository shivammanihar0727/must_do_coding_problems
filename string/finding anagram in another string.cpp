#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int n=s1.size(),m=s2.size();
        vector<int> fre(26,0),win(26,0),v1;
        if(n>m)
            cout<<v1[0];
        for(char ch:s1)
        {
            fre[ch-'a']+=1;
        }
        int i;
        for(i=0;i<n;i++)
        {
            win[s2[i]-'a']+=1;
        }
        
            if(fre==win)
            {
                v1.push_back(0);
            }
        for(;i<m;i++)
        {
            win[s2[i]-'a']+=1;
            win[s2[i-n]-'a']-=1;
            
            if(fre==win)
            {
                v1.push_back(i-n+1);
            }
        }
        for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
        cout<<endl;

		
		
	}            
}
