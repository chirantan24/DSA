vector<vector<vector<int>>>DP;
int LCS(string &a,string &b,string &c,int i,int j,int k)
{
    if(i<0 || j<0 || k<0)
    return 0;
    if(DP[i][j][k]!=-1)
    return DP[i][j][k];
    if(a[i]==b[j] && b[j]==c[k])
    return DP[i][j][k]=LCS(a,b,c,i-1,j-1,k-1)+1;
    else
    {
        int x=LCS(a,b,c,i-1,j,k);
        int y=LCS(a,b,c,i,j-1,k);
        int z=LCS(a,b,c,i,j,k-1);
        return DP[i][j][k]=max({x,y,z});
    }
}
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    DP=vector<vector<vector<int>>>(n1,vector<vector<int>>(n2,vector<int>(n3,-1)));
    return LCS(A,B,C,n1-1,n2-1,n3-1);
    // your code here
}
