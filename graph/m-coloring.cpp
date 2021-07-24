bool coloring(vc<vc<int>>&g,int v,int m)
{
    vc<int>vis(v+1,0);
    vc<int>c(v+1,1);
    vis[1]=1;
    queue<int>q;
    q.push(1);
    int col=1;
    loopf(i,1,v+1)
    {
        while(!q.empty())
        {
            int k=q.front();
            q.pop();
            for(auto j:g[k])
            {
                if(c[j]==c[k])
                    c[j]++;
                col=max(col,c[j]);
                if(col>m)
                    return 0;
                if(!vis[j])
                {
                    vis[j]=1;
                    q.push(j);
                }
            }

        }
    }
    return 1;
}
