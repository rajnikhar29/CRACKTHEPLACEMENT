class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
        
//     HEIGHT * WIDTH NIKALNA HAI
//     use 2 pointer approach
        int i=0;
        int j=n-1;
        
        
        int water=0;//to store height
        int maxWater=0;
        
        while(i<=j){
            water=min(height[i],height[j]); //jo min hoga usi tk aaega//jo chota hoga whi tk paani aaega
            water=water*(j-i);//j-i width de rha
            
            maxWater=max(maxWater,water);
            
            if(height[i]<=height[j]) i++;
            else{
                j--;
            }
        }
        return maxWater;
        
    }
};