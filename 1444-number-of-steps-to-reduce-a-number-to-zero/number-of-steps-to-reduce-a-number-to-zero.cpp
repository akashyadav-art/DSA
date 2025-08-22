class Solution {
public:
    int numberOfSteps(int num) {
        int x=0;
        int y=0;
        while  (num>0)
        {   if(num%2==0)
           { num=num/2;
            x++;
           }
          else
          { num=num-1;
           y++;
          }
        }
          return x+y;  
        
    }
};