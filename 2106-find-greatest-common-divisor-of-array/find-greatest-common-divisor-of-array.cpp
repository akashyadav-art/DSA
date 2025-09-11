class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int ans=*max_element(nums.begin(),nums.end());
        int res=*min_element(nums.begin(),nums.end());
     
     return gcd(res,ans);
    }
};