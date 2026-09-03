class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
       vector<int>ans;
        for (int x : nums1) {
        s1.insert(x);
        }
          for (int x : nums2) {
        s2.insert(x);
    }

        for(int x : s1)
        {
            for(int y : s2)
            {
                if(x==y)
                 ans.push_back(x);

            }


        }
        return ans;

    }
};
