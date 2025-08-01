class Solution {
public:
    int maxProduct(int n) {
      //  int pro=1;
      //while(n>0)
      //{ int ld=n%10;
      //  pro*=ld;
       //  n=n/10;}
     //return pro;
     vector<int>v;
     while (n>0)
     {
        int ld=n%10;
        n=n/10;
        v.push_back(ld);
     }
     sort(v.rbegin(),v.rend());
       return v[0]*v[1];
    }
};