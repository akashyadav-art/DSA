class Solution {
public:
    int digitFrequencyScore(int n) {
          unordered_map<int, int> ans;

        while (n > 0) {
            int x = n % 10;
            ans[x]++;
            n = n / 10;
        }

        int sum = 0;

        for (auto it : ans) {
            sum += it.first * it.second;
        }

        return sum;
    }
};