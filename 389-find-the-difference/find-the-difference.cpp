class Solution {
public:
    char findTheDifference(string s, string t) {
        int  ans=0;
        int res=0;
        for(int i=0;i<s.length();i++)
         {
            ans= ans^s[i];
         }
         for(int i=0;i<t.length();i++)
         {
            res= res^t[i];
         }
         return res^ans;
    }
};