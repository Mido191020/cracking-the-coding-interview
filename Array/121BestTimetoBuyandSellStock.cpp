class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int r = 1;
        int l = 0;
        int maxProfit = 0;  
        int size = prices.size();

        while (r < size) {
            if (prices[l] < prices[r]) {
                int x = prices[r] - prices[l];
                maxProfit = max(maxProfit, x);
            } else {
                l = r;
            }
            r++;
        }

        return maxProfit;
    }
};
