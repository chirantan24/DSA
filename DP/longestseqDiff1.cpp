int longestSubsequence(int N, int A[])
    {
        int DP[N];
        DP[0]=1;
        for(int i=1;i<N;i++)
        {
            DP[i]=1;
            for(int j=0;j<i;j++)
            {
                if(abs(A[i]-A[j])==1)
                DP[i]=max(DP[i],1+DP[j]);
            }
        }
        return *max_element(DP,DP+N);
        // code here
    }
