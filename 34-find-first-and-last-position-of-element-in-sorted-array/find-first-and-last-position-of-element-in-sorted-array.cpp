class Solution {
public: int lowerbound(vector<int>& nums,int n,int target){
 int low=0;
        int ans=nums.size();
        int high=nums.size()-1;
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>=target)
            {
                ans =mid;
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        return ans;
}
int upperbound(vector<int>&nums, int n,int target)
{
     int low=0;
        int ans=nums.size();
        int high=nums.size()-1;
        while (low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
            {
                ans =mid;
                high=mid-1;
            }
            else 
            {
                low=mid+1;
            }
        }
        return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
       int  lb=lowerbound(nums,n,target);
       int ub=upperbound(nums,n,target);
       if(lb==ub) 
        return {-1,-1};
        else {
            return {lb,ub-1};
        }
       }

    
};