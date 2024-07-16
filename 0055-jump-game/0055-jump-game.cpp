class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxJump=0;
        
        for(int i=0;i<nums.size();i++){
            if(i > maxJump) return false;//max agr 3 h aur hum 4th index pr aachuke so false
            
            maxJump=max(maxJump,i+nums[i]);
        }
        return true;
    }
};