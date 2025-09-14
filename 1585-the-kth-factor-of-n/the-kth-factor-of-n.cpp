class Solution {
public:
    int kthFactor(int n, int k) {
        int i=0;
        vector<int>factor,large;
        for (i=1;i*i<=n;i++)
        {
            if (n%i==0)
            {
               factor.push_back(i);
            
            if (i!=n/i)
            {
               large.push_back(n/i);
            }
            }
        }
        for (i=(int)large.size()-1;i>=0;i--)
        {
            factor.push_back(large[i]);
        }
        if(k<=factor.size())  return factor[k-1];
        else  return -1;
    }
};