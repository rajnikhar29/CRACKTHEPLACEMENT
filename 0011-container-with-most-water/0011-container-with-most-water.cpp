class Solution {
public:
    int maxArea(vector<int>& height) {
       int n=height.size();
        
//     HEIGHT * WIDTH NIKALNA HAI
//     use 2 pointer approach
        int i=0;
        int j=n-1;
        
        
        //to store height
        int maxWater=0;
        
        while(i<=j){
            int area=min(height[i],height[j])*(j-i); //jo min hoga usi tk aaega//jo chota hoga whi tk paani aaega);//j-i width de rha
            // water=water*(j-i);//j-i width de rha
            
            maxWater=max(maxWater,area);
            
            if(height[i]<=height[j]) i++;
            else{
                j--;
            }
        }
        return maxWater;
        
    }
};