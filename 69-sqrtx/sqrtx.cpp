class Solution {
public:
    int mySqrt(int x) {
          int l=1,r=x;
          while (l<=r)
          {
            long long mid= l+(r-l)/2;
            long long val=(mid*mid);
            if(val<=x)
            {
                l=mid+1;
            }
            else  {
                r=mid-1;
            }
          }
          return r;
    }
};