class Solution {
public:
    int findComplement(int num) {  // num=5
        unsigned mask=~0; //~num=010
        while(mask & num) mask =mask<<1; //mask=11111000
        return ~num ^ mask; // 010 ^11111000=2
    }
};