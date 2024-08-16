class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size(),res=0;
        sort(nums.begin(),nums.begin());
        int mid=nums[n/2];
        for(int i=0;i<n;i++){
            res += abs(mid-nums[i]);
        }
        return res;
    }
};