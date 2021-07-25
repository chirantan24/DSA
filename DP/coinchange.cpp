long long int DP[1001][1001];
    long long int change(int S[],int m,int n)
    {
       if(m==0)
       return DP[m][n]=0;
       if(n<0)
       return 0;
       if(n==0)
       return 1;
       if(DP[m][n]!=-1)
       return DP[m][n];
       return DP[m][n]=change(S,m-1,n)+change(S,m,n-S[m-1]);
    }
    long long int count( int S[], int m, int n )
    {
        for(int i=0;i<=m;i++)
        for(int j=0;j<=n;j++)
        DP[i][j]=-1;
        return change(S,m,n);
        //code here.
    }
