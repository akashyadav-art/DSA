class Solution {
public:
    int divide(int dividend, int divisor) {
          // Special case: overflow prevention
        if (dividend == -2147483648 && divisor == -1) {
        return 2147483647; // Integer.MAX_VALUE
       }
        // Normal division works fine otherwise
        return dividend/divisor;
    }
};