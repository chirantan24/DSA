int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<int>num;
        num.push_back(0);
        int c=1;
        for(int i=n-1;i>=0;i--)
        {
            if(n-i & 1)
            {
                for(int j=0;j<n;j++)
                    num.push_back(board[i][j]);
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                    num.push_back(board[i][j]);
            }
        }
        int step=0;
        queue<int>q;
        q.push(1);
        vector<int>vis(n*n+1,0);
        vis[1]=1;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                int k=q.front();
                q.pop();
                if(k==n*n)
                    return step;
                for(int j=k+1;j<=min(k+6,n*n);j++)
                {
                    if(vis[j])
                        continue;
                    if(num[j]!=-1)
                        q.push(num[j]);
                    else
                        q.push(j);
                    vis[j]=1;
                }
            }
            step++;
        }
        return -1;
    }
