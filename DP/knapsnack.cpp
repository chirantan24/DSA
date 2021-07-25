//Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int DP[W+1][n+1];
        for(int i=0;i<=n;i++)
        DP[0][i]=0;
        for(int i=1;i<=W;i++)
        DP[i][0]=0;
        for(int i=1;i<=W;i++)
        for(int j=1;j<=n;j++)
        {
            int a=(i-wt[j-1]>=0)?DP[i-wt[j-1]][j-1]+val[j-1]:0;
            int b=DP[i][j-1];
            DP[i][j]=max(a,b);
        }
        return DP[W][n];
    }
