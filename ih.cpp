class Solution {
public:
void dfs(vector<vector<int>>& image, int i, int j,  vector<vector<int>>&vis,int color,int st_pt,int n,int m){
    if(i<0 and j<0 or i>=n and j>=m ){
        return;
    }
    if(vis[i][j] or image[i][j]!=st_pt){
        return ;
    }
    vis[i][j]=true;
    image[i][j]=color;
    

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x=image.size();
        int y=image[0].size();
        vector<vector<int>>vis(x,vector<int>(y,0));
        int st_pt=image[sr][sc];
        dfs(image,sr,sc,vis,color,st_pt,x,y);
        return image;
    }
};