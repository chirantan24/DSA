bool helper(vector<int>adj[],int i,vector<int>&vis,int pre)
    {
        vis[i]=1;
        for(auto j:adj[i])
        {
            if(pre==j)
            continue;
            if(vis[j])
            return 1;
            else if(helper(adj,j,vis,i))
            return 1;
        }
        return 0;
    }
	bool isCycle(int V, vector<int>adj[])
	{
	    vector<int>vis(V+1,0);
	    for(int i=0;i<V;i++)
	    if(!vis[i] && helper(adj,i,vis,-1))
	    return 1;
	    return 0;
	    // Code here
	}
