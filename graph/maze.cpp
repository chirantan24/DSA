vector<string>ans;
    bool dfs(vector<vector<int>> &m,int i,int j,string s,vector<vector<int>> &vis,int n)
    {
        if(i==n-1 && j==n-1 && m[i][j])
        {
            ans.push_back(s);
            return 1;
        }
        else if(i==n-1 && j==n-1)
        return 0;
        vis[i][j]=1;
        if(i>0 && m[i-1][j] && !vis[i-1][j])
            dfs(m,i-1,j,s+"U",vis,n);
        if(i<n-1 && m[i+1][j] && !vis[i+1][j])
            dfs(m,i+1,j,s+"D",vis,n);
        if(j>0 && m[i][j-1] && !vis[i][j-1])
            dfs(m,i,j-1,s+"L",vis,n);
        if(j<n-1 && m[i][j+1] && !vis[i][j+1])
            dfs(m,i,j+1,s+"R",vis,n);
        vis[i][j]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<int>>vis(n,vector<int>(n,0));
        if(m[0][0])
        dfs(m,0,0,"",vis,n);
        sort(ans.begin(),ans.end());
        return ans;
        // Your code goes here
    }
