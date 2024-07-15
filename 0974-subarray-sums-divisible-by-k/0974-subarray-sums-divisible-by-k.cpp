class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // O(N3)BRUTE FORCE
//         int n=nums.size();
//         int cnt=0;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 if(sum%k==0)cnt++;
                
//             }
//         }
//         return cnt;
            
            
//           O(N2)--TLE  
//         int n=nums.size();
//         int cnt=0;
//         for(int i=1;i<n;i++){
//             nums[i]+=nums[i-1];//cumulative sum
//         }
        
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum=(i==0)? nums[j]:nums[j]-nums[i-1];
//                 if(sum%k==0)cnt++;
                
//             }
//         }
//         return cnt;
        
        
        int n=nums.size();
        unordered_map<int,int>mp;
        int sum=0;
        
       mp[0]=1;//0 remainder hoga shuru me
        int cnt=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            
            int rem=sum%k;
            
            if(rem <0) rem+=k;
            
            if(mp.find(rem)!=mp.end()){
                cnt+=mp[rem];
            }
            mp[rem]++;
            
        }
        return cnt;
        
    
        
        
            
            
            
            
    }
};