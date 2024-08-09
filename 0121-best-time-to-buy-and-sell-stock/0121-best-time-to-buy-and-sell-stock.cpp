class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minBuy=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < minBuy) minBuy=prices[i];
            maxProfit=max(maxProfit,prices[i]-minBuy);
        }
        return maxProfit;
    }
};