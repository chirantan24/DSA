public:
	//Function to find number of strongly connected components in the graph.
    set<pair<int,int>,greater<pair<int,int>>>s;
    int num=1;
    void post(int v, vector<int> adj[],vector<int>&vis,int i)
    {
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                vis[j]=1;
                post(v,adj,vis,j);
            }
        }
        s.insert({num++,i});
    }
    void dfs(vector<int>adj[],int i,vector<int>&vis)
    {
        for(auto j:adj[i])
        {
            if(!vis[j])
            {
                vis[j]=1;
                dfs(adj,j,vis);
            }
        }
    }
    int kosaraju(int V, vector<int> adj[])
    {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        if(!vis[i])
        vis[i]=1,post(V,adj,vis,i);
        fill(vis.begin(),vis.end(),0);
        int ans=0;
        vector<int> adj2[V]; 
        for(int i=0;i<V;i++)
        {
            for(auto j:adj[i])
                adj2[j].push_back(i);
        }
        while(!s.empty())
        {
            auto i=s.begin();
            pair<int,int>p=*i;
            s.erase(i);
            if(vis[p.second])
            continue;
            vis[p.second]=1;
            dfs(adj2,p.second,vis);
            ans++;
        }
        return ans;
        //code here
    }
