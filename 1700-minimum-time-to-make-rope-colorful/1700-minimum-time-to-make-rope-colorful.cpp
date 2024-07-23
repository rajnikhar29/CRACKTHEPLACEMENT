class Solution {
public:
    int minCost(string colors, vector<int>&t) {
        int n=colors.size();
        int mini=0;
        int i=0;
        int j=1;

        while(j<n){
            if(colors[i]==colors[j]){
                mini+=min(t[i],t[j]);
            
            if(t[i] < t[j]) i=j,j++;
            else j++;
            }
            else i=j,j++;
        }
        return mini;

    }
};