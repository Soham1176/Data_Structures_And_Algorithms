class Solution {
public:
    void bfsOfGraph(int row,int col,vector<vector<int>>& image,vector<vector<int>> &vis,int val,int color)
    {
        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        image[row][col]=color;
        int n=image.size();
        int m=image[0].size();

        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            int rVal[]={-1,0,1,0};
            int cVal[]={0,1,0,-1};

            for(int i=0;i<4;i++)
            {
                int newR=r+rVal[i];
                int newC=c+cVal[i];
                if(newR>=0 && newR<n && newC>=0 && newC<m && !vis[newR][newC] && image[newR][newC] == val){
                    image[newR][newC]=color;
                    vis[newR][newC]=1;
                    q.push({newR,newC});
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val=image[sr][sc];
        vector<vector<int>> vis(n,vector<int> (m,0));
        bfsOfGraph(sr,sc,image,vis,val,color);
        
        return image;
    }
};