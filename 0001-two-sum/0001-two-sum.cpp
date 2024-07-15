class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            int remaining= target-nums[i];
            
//             remaining mil rha kya sum k liye
            if(mp.find(remaining) != mp.end()){
                return {mp[remaining],i};
            }
//             store the current number to check if it can be used later
            mp[nums[i]]=i;
        }
        
        return {};
    }
};