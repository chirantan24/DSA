int get(string &a,string &b)
    {
        for(int i=0;i<a.length();i++)
        if(a[i]!=b[i])
        return i;
        return -1;
    }
    string Topo(vector<vector<int>>&g)
    {
        vector<int>ind(g.size(),0);
        for(int i=0;i<g.size();i++)
        for(auto j:g[i])
        ind[j]++;
        queue<int>q;
        string s="";
        for(int i=0;i<g.size();i++)
        if(ind[i]==0)
        q.push(i);
        while(!q.empty())
        {
            s.push_back(q.front()+'a');
            for(auto i:g[q.front()])
            {
                ind[i]--;
                if(ind[i]==0)
                q.push(i);
            }
            q.pop();
        }
        return s;
    }
    string findOrder(string dict[], int N, int K) {
        vector<vector<int>>g(K);
        for(int i=0;i<N-1;i++)
        {
            int k=get(dict[i],dict[i+1]);
            if(k==-1)
            continue;
            g[dict[i][k]-'a'].push_back(dict[i+1][k]-'a');
        }
        // cout<<s<<endl;
        return Topo(g);
        //code here
    }
