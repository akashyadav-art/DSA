class Solution {
public:
    int arraySign(vector<int>& nums) {
   //     int count =0;
     //   for(int i=0;i<nums.size;i++)
     // {
      //  if (nums[i]==0) return 0;
     //   if (nums[i]<0) count++;
     // }
     // return count%2 ? -1 : 1;
    //  }
     int sign=1;
     for(int i=0;i<nums.size();i++)
     {
        if(nums[i]<0) 
        sign*=-1;
        if(nums[i]==0)
        return 0;
     }
        return sign;
    }

};