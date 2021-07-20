vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>>vis(image.size(),vector<int>(image[0].size(),0));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int s=image[sr][sc];
        while(!q.empty())
        {
            int i=q.front().first,j=q.front().second;
            q.pop();
            image[i][j]=newColor;
            if(i>0 && image[i-1][j]==s && !vis[i-1][j])
                q.push({i-1,j}),vis[i-1][j]=1;
            if(i<image.size()-1 && image[i+1][j]==s && !vis[i+1][j])
                q.push({i+1,j}),vis[i+1][j]=1;
            if(j>0 && image[i][j-1]==s && !vis[i][j-1])
                q.push({i,j-1}),vis[i][j-1]=1;
            if(j<image[0].size()-1 && image[i][j+1]==s && !vis[i][j+1])
                q.push({i,j+1}),vis[i][j+1]=1;
        }
        return image;
    }
// BFS
