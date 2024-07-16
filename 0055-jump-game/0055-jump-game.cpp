class Solution {
public:
    bool f(int ind,int n,vector<int>&nums,vector<int>&dp){
        // T.C-O(N)
        // S.C=O(N)
        if(ind==n-1) return true;
        // if(ind>=n) return true;
        
        if(dp[ind]!=-1) return dp[ind];
        for(int i=1;i<=nums[ind];i++){
            if(f(ind+i,n,nums,dp)==true) return true;
            
        }
        return dp[ind]=false;
        
    }
    
    // T.C-O(N2)
    // T.C=O(N)--dp array
    
        bool ff(int ind,int n,vector<int>&nums,vector<bool>&dp){
        dp[0]=true;

        
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(dp[j]==true && j+nums[j] >=i) {
                dp[i]=true;
                break;
                }
            }
        }
           return dp[n-1];
        
    }

    
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        // vector<int>dp(n+1,-1);
        vector<bool>dp(n,false);
        return ff(0,n,nums,dp);
        
        // T.C-O(N)
        // S.C-O(1)
//         int maxJump=0;
//         for(int i=0;i<nums.size();i++){
//             if(i > maxJump) return false;//max agr 3 h aur hum 4th index pr aachuke so false
            
//             maxJump=max(maxJump,i+nums[i]);
//         }
//         return true;
    }
};