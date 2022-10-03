#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        
        
        priority_queue<pair<int,int> > pq;
        vector<int> v;
        for(int i=0;i<arr.size();i++) 
        {

            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
                pq.pop();
        
        }
        while(pq.size())
        {
            v.push_back(pq.top().second);
            pq.pop();
            
        }
        sort(v.begin(),v.end());
        return v;
    }
    
    
int main() 
{ 
 	int t;
	cin>>t;
	while(t--)
	{
		int n,a,k,x;
		cin>>n>>k>>x;
		vector<int> v;
		vector<int> v1;
		
		for(int i=0;i<n;i++)
		{
				cin>>a;
				v.push_back(a);
		}
		v1=findClosestElements(v,k,x);
		for(int i=0;i<k;i++)
		{
				cout<<v1[i]<<" ";
				
		}
		cout<<endl;		
	}	 
	return 0; 
}

