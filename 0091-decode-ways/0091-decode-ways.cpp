class Solution {
public:
    int f(string s, int index, vector<int> dp) {
        if (index == s.length())
            return 1;
        if (s[index] == '0')
            return 0;

        if (dp[index] != -1)
            return dp[index];

        int ways = f(s, index + 1, dp); // decode current digit

        if (index + 1 < s.length() && (s[index] == '1' ||
            (s[index] == '2' && s[index + 1] <= '6'))) {
            ways += f(s, index + 2, dp);
        }
        return dp[index] = ways;
    }
    int ff(string s, vector<int> dp){
       int n=s.length();
       if(n==0||s[0]=='0') return 0;

       dp[0]=1;
       dp[1]=1;

       for(int index=1;index<n;index++){
        int ways = dp[index+1]; // decode current digit

        if (index + 1 < s.length() && (s[index] == '1' ||
            (s[index] == '2' && s[index + 1] <= '6'))) {
            ways += dp[index + 2];
        }
        dp[0]=dp[1];
        dp[1]=ways;
       }
       return dp[1];
    }
    int numDecodings(string s) {
        int n = s.length();
        vector<int> dp(n, 0);
        return f(s, 0, dp);
    }
};