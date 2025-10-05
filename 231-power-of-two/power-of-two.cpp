class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if(n==1) return true;
            double x=log2(n);
        return round(x)==x;

    }
};