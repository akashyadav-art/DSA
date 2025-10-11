class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int rem=0;
        int temp=x;
        while(x>0)
        { rem=x%10;
           x =x/10;
          sum +=rem;
        }
        if(temp%sum==0)
        {
            return  sum;
        }
        else return -1;
    }
};