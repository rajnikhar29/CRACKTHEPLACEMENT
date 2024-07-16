class Solution {
public:
    bool f(int ind,int n,vector<int>&nums,vector<int>&dp){
        if(ind==n-1) return true;
        // if(ind>=n) return true;
        
        if(dp[ind]!=-1) return dp[ind];
        for(int i=1;i<=nums[ind];i++){
            if(f(ind+i,n,nums,dp)==true) return true;
            
        }
        return dp[ind]=false;
        
    }
    
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,n,nums,dp);
        
        
//         int maxJump=0;
//         for(int i=0;i<nums.size();i++){
//             if(i > maxJump) return false;//max agr 3 h aur hum 4th index pr aachuke so false
            
//             maxJump=max(maxJump,i+nums[i]);
//         }
//         return true;
    }
};