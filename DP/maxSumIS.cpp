int maxSumIS(int arr[], int n)  
	{  
	    int DP[n];
	    DP[0]=arr[0];
	    for(int i=1;i<n;i++)
	    {
	        int m=arr[i];
	        DP[i]=m;
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	                DP[i]=max(DP[i],m+DP[j]);
	        }
	    }
	    return *max_element(DP,DP+n);
	    // Your code goes here
	}  
