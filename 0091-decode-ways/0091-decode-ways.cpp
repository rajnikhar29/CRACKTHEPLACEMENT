class Solution {
public:

int f(int i,string &s,int&n,vector<int>&dp){
    if(i==n) return 1;
    if(s[i]=='0')return 0;
    if(dp[i]!=-1) return dp[i];
    int result=f(i+1,s,n,dp);
    if(i+1<n){//out of bound nhi ho rha
    if(s[i]=='1'|| s[i]=='2' && s[i+1] <='6'){
        result+=f(i+2,s,n,dp);
    }
    }
    return dp[i]= result;
}
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        int ans=f(0,s,n,dp);
        return ans;
    }
};