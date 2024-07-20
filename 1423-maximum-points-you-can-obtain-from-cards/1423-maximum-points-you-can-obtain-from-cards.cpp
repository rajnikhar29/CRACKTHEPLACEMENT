class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n=arr.size();
        int lsum=0;
        int rsum=0;
        int maxSum=0;

        for(int i=0;i<=k-1;i++){
            lsum=lsum+arr[i];
            maxSum=lsum;
        }
        int rightIndex=n-1;
        for(int i=k-1;i>=0;i--){
            lsum=lsum-arr[i];
            rsum+=arr[rightIndex];
            rightIndex--;
            maxSum=max(maxSum,lsum+rsum);
        }
        return maxSum;
    }
};