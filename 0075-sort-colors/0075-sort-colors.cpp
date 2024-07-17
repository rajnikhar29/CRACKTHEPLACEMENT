class Solution {
public:
    void sortColors(vector<int>& nums) {
      int n=nums.size();
        int i=0;
        int j=0;
        int k=n-1;
        
        while(j<=k){
            if(nums[j]==1) j++;
            else if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else{
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
        }
        
        
        
        
        // int n=nums.size();
        // vector<int>ans;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         ans.push_back(0);
        //     }
        //     }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==1){
        //         ans.push_back(1);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==2){
        //         ans.push_back(2);
        //     }
        // }
        // nums=ans;

        
    }
};