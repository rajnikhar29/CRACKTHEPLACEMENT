class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //left and right product bnao
        int n=nums.size();
        vector<int>result(n);
        result[0]=1;

        for(int i=1;i<n;i++){
            result[i]=result[i-1]*nums[i-1];
        }

        int right_prod=1;
        for(int i=n-1;i>=0;i--){
            result[i]=result[i]*right_prod;
            right_prod *= nums[i];
        }
        return result;
    }


};