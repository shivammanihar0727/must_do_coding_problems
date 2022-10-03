#include <bits/stdc++.h>  
using namespace std; 
typedef pair<int,pair<int,int>> ppi; 
    vector<vector<int>> kClosest(vector<vector<int>>& v, int K) {
        vector<vector<int>> v1;
         priority_queue<ppi> pq; 
        for(int i=0;i<v.size();i++)
        {
            int ans=(v[i][0]*v[i][0])+(v[i][1]*v[i][1]);
            pq.push({ans,{v[i][0],v[i][1]}});
            if(pq.size()>K)
                pq.pop();
        }
        while(pq.size()>0)
        {
            pair<int,int> p=pq.top().second;
            //cout<<p.first<<" "<<p.second<<endl;
            v1.push_back({p.first,p.second});
            pq.pop();
        }
       // v.push_back({0,1});
        return v1;
    }

int main() 
{ 
 	int t;
	cin>>t;
	while(t--)
	{
		long n,a,k;
		cin>>n>>k;
		vector<int> v;
		vector<int> v1;
		
		ll ar[n];
		for(int i=0;i<n;i++)
		{
				cin>>ar[i];
				v.push_back(ar[i]);
		}
		v1=topKFrequent(v,k);
		for(int i=0;i<k;i++)
		{
				cout<<v1[i]<<" ";
				
		}
		cout<<endl;		
	}	 
	return 0; 
}
    
    
