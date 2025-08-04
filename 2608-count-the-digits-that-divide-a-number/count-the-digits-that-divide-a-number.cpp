class Solution {
public:
    int countDigits(int num) {
        int count =0;
        int n=num;
        while (num>0)
        { int ld=num%10;
            if( ld !=0  && n%ld==0)
           { count ++;
           }
            num=num/10;
         }
       return count;
    }
};