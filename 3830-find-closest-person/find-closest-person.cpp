class Solution {
public:
    int findClosest(int x, int y, int z) {
       int ans=abs (z-x);
       int res=abs (z-y);
       if (ans==res) return 0;
       if (ans<res)  return 1;
       else return 2; 
    }
};