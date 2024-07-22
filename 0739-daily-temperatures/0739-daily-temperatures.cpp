class Solution {
public:
    vector<int> dailyTemperatures(vector<int>&arr) {
        // 2 loop lga phir j-i kde index minus 

        // optimal --O(N)
        stack<int>st;
        int n=arr.size();
        
        vector<int>result(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i] >=arr[st.top()]){
                st.pop();
            }
            if(st.empty()) result[i]=0;
            else result[i]=st.top()-i;
             st.push(i);
        }
        return result;
       
    }
};