class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
       vector<pair<int,int>>res;
       int m=arr.size();
       int i=0;
       int j=arr.size()-1;

       while(i<j){
        if((arr[i]+arr[j])%k==0){
            res.push_back({arr[i],arr[j]});
        }
        else{
            j--;
        }
        i++;
        j--;
    
       }
       int n=res.size();
       if(n==m/2) return true;
       else return false;
    }
};