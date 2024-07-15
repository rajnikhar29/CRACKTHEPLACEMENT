class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // T.C-O(nlogN)
        // sort(nums.begin(),nums.end());
        // vector<int>ans;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==nums[i-1]) ans.push_back(nums[i]);
        // }
        // return ans;
        
//           for questions containing [1,n] we can use
        
        int n=nums.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int idx=num-1;
            
            if(nums[idx] <0)ans.push_back(num);
            else nums[idx]*=-1;
            
        }
        return ans;
    };
    
};