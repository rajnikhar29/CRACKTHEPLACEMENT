class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         Moore's Voting Algo
//         T.C-O(N), S.C-O(1)
        int cnt=0;
        int ele;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt=1;
                ele=nums[i];
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ele;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         NlogN+N...SC-O(N)
//         map<int,int>mp;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//         }
        
//         for(auto it:mp){
//             if(it.second >(nums.size()/2)){
//                 return it.first;
//             }
//         }
//         return -1;
        
    }
};