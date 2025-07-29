class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int revnum = 0;
       int temp=x;
    while (x != 0) {
        int ld = x % 10;

        // Check for overflow before multiplying or adding
        if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10) {
            return 0;
        }

        revnum = revnum * 10 + ld;
        x = x / 10;
    }
     if( revnum==temp )
     {return true;
     }

     
    
    return false;
}

};