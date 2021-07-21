int numIslands(vector<vector<char>>& grid) 
    {
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        int size=0;
        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++)
            if(grid[i][j]=='1' && !vis[i][j])
            {
                vis[i][j]=1;
                queue<pii>q;
                q.push({i,j});
                while(!q.empty())
                {
                int i=q.front().first,j=q.front().second;
                q.pop();
                if(i>0 && grid[i-1][j]=='1' && !vis[i-1][j])
                vis[i-1][j]=1,q.push({i-1,j});
                if(i<grid.size()-1 && grid[i+1][j]=='1' && !vis[i+1][j])
                vis[i+1][j]=1,q.push({i+1,j});
                if(j>0 && grid[i][j-1]=='1'&& !vis[i][j-1])
                vis[i][j-1]=1,q.push({i,j-1});
                if(j<grid[0].size()-1 && grid[i][j+1]=='1'&& !vis[i][j+1])
                vis[i][j+1]=1,q.push({i,j+1});
                if(i>0 && j>0 && grid[i-1][j-1]=='1'&& !vis[i-1][j-1])
                vis[i-1][j-1]=1,q.push({i-1,j-1});
                if(i>0 && j<grid[0].size()-1 && grid[i-1][j+1]=='1'&& !vis[i-1][j+1])
                vis[i-1][j+1]=1,q.push({i-1,j+1});
                if(i<grid.size()-1 && j>0 && grid[i+1][j-1]=='1'&& !vis[i+1][j-1])
                vis[i+1][j-1]=1,q.push({i+1,j-1});
                if(i<grid.size()-1 && j<grid[0].size()-1 && grid[i+1][j+1]=='1'&& !vis[i+1][j+1])
                vis[i+1][j+1]=1,q.push({i+1,j+1});
                }
                size++;
            }
            return size;
        // Code here
    }
