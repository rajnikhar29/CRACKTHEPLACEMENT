class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            ans = ans*nums[i];
        }
        return ans;
    }
};