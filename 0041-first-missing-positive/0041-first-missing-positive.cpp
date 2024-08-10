class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         // approach1 sort an check count
        // sort(nums.begin(),nums.end());
        // int count=1;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==count) count++;
        // }
        // return count;

        // APPROACH 2:
        int n =nums.size();

        bool contains1=false;

        for(int i=0;i<n;i++){
        if(nums[i]==1) contains1=true;
        if(nums[i]<=0 ||nums[i] > n) nums[i]=1;
        }

        if(contains1==false) return 1;

        for(int i=0;i<n;i++){
            int num=abs(nums[i]);
            int idx=num-1;

            if(nums[idx] <0) continue;
            nums[idx]*= -1;

        }
        for(int i=0;i<n;i++){
            if(nums[i] >0) return i+1;
        }

        return n+1;

    }
};