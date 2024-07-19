class Solution {
public:
    int f(int ind, int buy, vector<int>& prices, vector<vector<int>> dp) {
        int n = prices.size();
        if (ind == n)
            return 0;
        int profit = 0;
        if (dp[ind][buy] != -1)
            return dp[ind][buy];
        if (buy) {
            // /buy
            profit = max(-prices[ind] + f(ind + 1, 0, prices, dp),
                         0 + f(ind + 1, 1, prices, dp));
        } else {
            // sell
            profit = max(prices[ind] + f(ind + 1, 1, prices, dp),
                         0 + f(ind + 1, 0, prices, dp));
        }
        return dp[ind][buy] = profit;
    }

    int ff(vector<int>& prices, vector<vector<int>> dp) {
        int n = prices.size();
        dp[n][0] = dp[n][1] = 0;
        int profit = 0;
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy <= 1; buy++) {
                if (buy) {
                    // /buy
                    profit =
                        max(-prices[ind] + dp[ind + 1][0], 0 + dp[ind + 1][1]);
                } else {
                    // sell
                    profit =
                        max(prices[ind] + dp[ind + 1][1], 0 + dp[ind + 1][0]);
                }
                dp[ind][buy] = profit;
            }
        }
        return dp[0][1];
    }

    int fff(vector<int>& prices) {
        vector<int> ahead(2, 0), curr(2, 0);
        int n = prices.size();
        ahead[0] = ahead[1] = 0;
        int profit = 0;
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy <= 1; buy++) {
                if (buy) {
                    // /buy
                    profit = max(-prices[ind] + ahead[0], 0 + ahead[1]);
                } else {
                    // sell
                    profit = max(prices[ind] + ahead[1], 0 + ahead[0]);
                }
                curr[buy] = profit;
            }
            ahead = curr;
        }
        return ahead[1];
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));

        // return f(n-1,1,prices,dp);
        // return ff(prices,dp);
        return fff(prices);
    }
};