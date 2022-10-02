class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0, end=nums.size()-1;
		// we initialize pivot with first element because if size of array 
		// is 1 then we can not  satisfy the if condition written in while
		// loop so in last we return pivot element as answer.
        int pivot = nums[0];
        while(start <= end){
            int mid = start+(end-start)/2;
            int prev = (mid-1+nums.size())%nums.size();
            int next = (mid+1)%nums.size();
            if(nums[mid] < nums[prev] and nums[mid] < nums[next]){
                pivot = nums[mid];
                return pivot;
            }
            else if(nums[mid] > nums[nums.size()-1]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return pivot;
    }
};
