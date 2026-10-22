class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        int maxPro = INT_MIN;
        for(int i=1; i<prices.size(); i++){
            int cost = prices[i] - buy;
            maxPro = max(maxPro,cost);
            buy = min(buy,prices[i]);
        }
        if(maxPro < 0){
            return 0;
        }

        return maxPro;
        
    }
};