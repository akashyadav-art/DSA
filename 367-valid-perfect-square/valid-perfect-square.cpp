class Solution {
public:
    bool isPerfectSquare(int num) {
         for(long i=1;i*i<=num;i++)  // use long for i*i is overflow.         
            if( i*i==num)
            {
                return true;
            }
      return false;

    }
};