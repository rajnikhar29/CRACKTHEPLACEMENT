class Solution {
public:
    int trap(vector<int>&arr) {
    int n=arr.size();
    if(n<=2) return 0;//edge case//2 bar water hold kr nhi skte
    vector<int>right(n);
    vector<int>left(n);

    left[0]=arr[0];
    // 0 wont hold any water
    for(int i=1;i<n;i++){
        left[i]=max(arr[i],left[i-1]);
    }

    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(arr[i],right[i+1]);


    }

    int sum=0;
    // first and last wont hold any water// so(n-1
    
    for(int i=1;i<n-1;i++){
        sum+=min(left[i],right[i])-arr[i];
    }
    return sum;
    }
};