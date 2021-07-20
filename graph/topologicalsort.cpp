stack<int>s;
	void dfs(vector<int>adj[],vector<int>&vis,int i)
	{
	    for(auto j:adj[i])
	    {
	        if(!vis[j])
	        {
	            vis[j]=1;
	            dfs(adj,vis,j);
	        }
	    }
	    s.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int>ans;
	    vector<int>vis(V+1,0);
	    for(int i=0;i<V;i++)
	    if(!vis[i])
	    vis[i]=1,dfs(adj,vis,i);
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	    // code here
	}
