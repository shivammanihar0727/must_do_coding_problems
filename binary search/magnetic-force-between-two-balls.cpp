class Solution {
public:
    bool isValid(vector<int> &p, int m, int mid)
    {
        int lpos=-1;
        int balls=m;
        for(int i=0; i<p.size(); i++)
        {
            if(lpos==-1 || p[i]-lpos>=mid)
            {
                balls--;
                lpos=p[i];
            }
            if(balls==0) break;
        }
        
        return balls==0;
    }
    int maxDistance(vector<int>& p, int m) {
        int l=1, h=1e9, mid, ans=-1;
        sort(p.begin(), p.end());
        while(l<=h)
        {
            mid=(l+h)>>1;
            if(isValid(p, m, mid))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        
        return ans;
    }
};