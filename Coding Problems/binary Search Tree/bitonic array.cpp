// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	int cal(int arr[],int start,int end,int key)
	{
	    while(start<=end)
	    {
	       int mid=end-(end-start)/2;
	        if(arr[mid]==key)
	        {
	            return mid;
	        }
	        else if(arr[mid]<key)
	        {
	            start=mid+1;
	        }
	        else
	        {
	            end=mid-1;
	        }
	    } 
	    return -1;
	}
	int findNumber(int arr[], int n, int key) {
	    int start=0,end=n-1,pos,res1=-1,res2=-1;
	    while(start<=end)
	    {
	        int mid=end-(end-start)/2;
	        cout<<"hi";
	        if(mid>0&&mid<n-1)
	        {
	        	
	            if(arr[mid]>arr[mid+1]&&arr[mid-1]<arr[mid])
	            {
	                pos=mid;
	                break;
	            }
	            else if(arr[mid-1]>arr[mid])
	            {
	            	start=mid-1;
				}
				else if(arr[mid]<arr[mid+1])
				start=mid+1;
	        }
	        else if(mid==0)
	        {
	            if(arr[mid]>arr[mid+1])
	            {
	                pos=0;
	                
	            }
	            else
	            pos=1;
	            break;
	        }
	        else if(mid==n-1)
	        {
	             if(arr[mid]>arr[mid-1])
	            {
	                pos=n-1;
	            }
	            else
	            pos=n-2;
	            break;
	        }
	    }
	    res1=cal(arr,0,pos,key);
	    res2=cal(arr,pos+1,n-1,key);
	    return max(res1,res2);
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i, k;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        auto ans = ob.findNumber(arr, n, k);

        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
