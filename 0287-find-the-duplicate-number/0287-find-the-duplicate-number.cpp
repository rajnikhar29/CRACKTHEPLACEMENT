class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int ans;
        
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]==nums[i+1]){
//                 ans=nums[i];
//             }

//         }
//         return ans;
        
        // approach 2:
        int slow=nums[0];//initialiaze at zero
        int fast=nums[0];
        
        slow=nums[slow];
        fast=nums[nums[fast]];//shuru me equal h to cycle detect k liye ek aage bdha de
        
//         detect cycle
        while(slow!=fast){
             slow=nums[slow];
             fast=nums[nums[fast]];
        }
        
        slow=nums[0];
        
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
        
    }        

};