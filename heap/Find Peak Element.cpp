class Solution {
public:
    int findPeakElement(vector<int>& ar) {
        int n=ar.size();
        if(n==1)
            return 0;
        if(n==2)
        {
            if(ar[0]>ar[1])
            return 0;
            else
                return 1;
        }
        int low=0,high=n-1,mid,res=-1;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid>0&&mid<n-1)
            {
                if(ar[mid]>ar[mid+1]&&ar[mid]>ar[mid-1])
                {
                    res=mid;
                    break;   
                }
                else if(ar[mid]<ar[mid-1])
                {
                    high=mid-1;
                }
                else if(ar[mid+1]>ar[mid])
                {
                    low=mid+1;
                }
            }
            else if(mid==0)
            {
                if(ar[0]>ar[1])
                {
                    
                    res=mid;
                     break;
                }
                else
                {
 
                    res=mid+1;
                     break;
                }
            }
            else if(mid==n-1)
            {
                if(ar[mid]>ar[mid-1])//mid=n-1 &&mid-1=n-2
                {
                    
                    res=mid;
                    break;
                }
                else
                {
                    
                    res=mid-1;
                     break;
                }
            }
                
            
            
        }
        return res;
        
    }
};
