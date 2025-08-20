class Solution {
public:
    int differenceOfSums(int n, int m) {
        long long sum=0;
        long long ans=0;
        for (int i=1;i<=n;i++)
        { if (i%m==0)
           {sum+=i;
           }
         else {
            ans+=i;
         }
        }
        int y =ans-sum;
       return (int)y ;
    }
}; 
