#include<bits/stdc++.h>
using namespace std;
int main() 
{


    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
	
        int a;
        priority_queue<int,vector<int>,greater<int> > minh,minh1;
        cin>>a;
        if(a==1)
        {
            int x;
            cin>>x;
           cout<<x<<" ";
            minh.push(x);
        }
        
        else if(a==2)
        {
            
            int x;
            cin>>x;
            
           // cout<<x<<" ";
            while(!minh.empty())
            {int ans=minh.top();
                if(minh.top()!=x)
                minh1.push(ans);
                minh.pop();
            }
             minh=minh1;
        }
        else if(a==3)
        {   
        //cout<<"hi";
            int ans=minh.top();
            v.push_back(ans);
        }
    }
    for(int  i=0;i<v.size();i++)
    {
    	cout<<v[i]<<"\n";
	}
    return 0;
}

