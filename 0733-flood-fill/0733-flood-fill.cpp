class Solution {
public:

void dfs(vector<vector<int>>& image,int sr, int sc, int color,int iniColor,int delrow[],int delcol[],vector<vector<int>>&ans){
    ans[sr][sc]=color;
    int n=image.size();
    int m=image[0].size();
    

    for(int i=0;i<4;i++){
        int nrow=sr+delrow[i];
        int ncol=sc+delcol[i];
    
    if(nrow >=0 && nrow<n && ncol >=0 && ncol <m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=color){
        dfs(image,nrow,ncol,color,iniColor,delrow,delcol,ans);
    }
    }


}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor=image[sr][sc];
        if(iniColor==color) return image;
        vector<vector<int>>ans=image;
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};

        dfs(image,sr,sc,color,iniColor,delrow,delcol,ans);
        return ans;
    }
};