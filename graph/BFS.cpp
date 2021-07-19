vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    vector<int>ans;
	    queue<int>q;
	    q.push(0);
	    vector<int>vis(V+1,0);
	    while(!q.empty())
	    {
	        int k=q.front();
	        ans.push_back(k);
	        q.pop();
	        vis[k]=1;
	        for(auto i:adj[k])
	        if(!vis[i])
	        q.push(i),vis[i]=1;
	    }
	    return ans;
	    // Code here
	}
