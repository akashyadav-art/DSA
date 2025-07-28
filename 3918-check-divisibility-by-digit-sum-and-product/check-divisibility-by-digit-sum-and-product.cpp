class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int org=n;
      { while(n>0)
        {
            int ld=n%10;
            sum=sum+ld;
            pro*=ld;
            n=n/10;
        }
       } long long total=0;
        total =sum+pro;
        if(org%total==0) {return true ;
        }
        else return false;
    }
};