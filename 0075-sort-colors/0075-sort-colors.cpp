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
    
    
        
        
//         NOT IN SINGLE PASS BUT O(N)
//       vector<int>num;
//        for(int i =0;i<nums.size();i++){
//         if(nums[i]==0)num.push_back(0);
//        } 
//        for(int i =0;i<nums.size();i++){
//         if(nums[i]==1)num.push_back(1);
//        } 
//        for(int i =0;i<nums.size();i++){
//         if(nums[i]==2)num.push_back(2);
//        } 
//     nums=num;
    }
        
       
};