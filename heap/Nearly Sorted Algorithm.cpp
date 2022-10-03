#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i;
	    cin>>n>>k;
	    priority_queue<int,vector<int>,greater<int> > pq;//min heap is required
	    int ar[n];
	    for(i=0;i<n;i++)
	    {
	     cin>>ar[i];   
	    }
	    vector<int> v;
	    for(i=0;i<n;i++)
	    {
	        pq.push(ar[i]);
	        if(pq.size()>k)
	        {
	            v.push_back(pq.top());
	            pq.pop();
	        }
	    }
	    while(!pq.empty())
        {
            
	            v.push_back(pq.top());
	            pq.pop();
	        
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
	    
	    
	    
	}
	return 0;
}
