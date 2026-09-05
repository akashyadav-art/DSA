class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans=0;
        int b=count(text.begin(),text.end(),'b');
        int a=count(text.begin(),text.end(),'a');
        int l=count(text.begin(),text.end(),'l')/2;
        int o=count(text.begin(),text.end(),'o')/2;
        int n=count(text.begin(),text.end(),'n');
       ans= min({b,a,l,o,n});
       return ans;

    }
};