class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int  n=operations.size();
        int x=0;
        for (int i=0;i<n;i++)
        {   string op=operations[i];
          
            if (op[1]=='+')
           { x++;
           }
            else x--;
        }
        return x;
    }
};