class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;

        for(auto &val:arr){
            mp[val]++;
        }

        int rank=1;

        for(auto &val:mp){
            val.second=rank;
            rank++;
        }

        vector<int>ans(arr.size());
        for(int i=0;i<arr.size();i++){
            ans[i]=mp[arr[i]];
        }
        return ans;
    }
};