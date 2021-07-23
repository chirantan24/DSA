int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    int dist[n+1];
	    for(int i=1;i<=n;i++)
	    dist[i]=INT_MAX;
	    dist[1]=0;
	    for(int i=1;i<n;i++)
	    {
	        for(auto i:edges)
	        {
	            int u=i[0],v=i[1];
	            if(dist[u]!=INT_MAX && dist[u]+i[2]<dist[v])
	            dist[v]=dist[u]+i[2];
	        }
	    }
	    for(auto i:edges)
	        {
	            int u=i[0],v=i[1];
	            if(dist[u]!=INT_MAX && dist[u]+i[2]<dist[v])
	            return 1;
	        }
	       return 0;
	    // Code here
	}
