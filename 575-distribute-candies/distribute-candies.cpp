class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int x=0;
        int ans=0;
        ans=n/2;
        set<int>s1;
      for(int i=0;i<n;i++)
      {
          s1.insert(candyType[i]);
      }
        x=s1.size();
         return min(x,ans);
    }
};