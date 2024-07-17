class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minBuy=INT_MAX;
        int maxprofit=0;
        
        for(int i=0;i<n;i++){
            minBuy=min(minBuy,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minBuy);
        }
        return maxprofit;
    }
};