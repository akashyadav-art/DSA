class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
               freq[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
           if(freq[nums[i]]==1)
           {
             sum=sum+nums[i];
           }
        }
        return sum;
    }
};