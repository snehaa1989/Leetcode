class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        if(prices.empty()) return 0;
        int n = prices.size();
        int c = prices[0];
        
        
        for(int i = 1; i < n; i++)
        {
            profit = max(profit, prices[i] - c);
            c = min(c, prices[i]);
            
        }
        
        return profit;
    }
};