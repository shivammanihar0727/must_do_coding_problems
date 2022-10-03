#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int ar[n],i;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    int start=0,end=n-1,mid,res=-1;
	    while(start<=end)
	    {
	        mid=end-(end-start)/2;
	        if(ar[mid]<=k)
	        {
	            start=mid+1;
	            res=mid;
	        }
	        else
	        {
	            end=mid-1;
	        }
	        
	        
	    }
	    cout<<res<<endl;
	    
	}
	return 0;
}
