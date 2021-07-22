const int INF = 2147483647;
const int MAX = 5005;
int D[MAX], N; // Keeps minimum distance to each node
vector<pair<int,int>> E[MAX]; // Adjacency list
 
void dijkstra()
{
    for(int i = 1; i <= N; i++) D[i] = INF;
    D[1] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,1});
 
    while(!q.empty())
    {
        pair<int,int> p = q.top();
        q.pop();
 
        int u = p.second, dist = p.first;
        if(dist > D[u]) continue; // avoid old pairs
 
        for(pair<int,int> pr : E[u])
        {
            int v = pr.first;
            int next_dist = dist + pr.second;
 
            if(next_dist < D[v])
            {
                D[v] = next_dist;
                q.push({next_dist,v});
            }
        }
    }
}
// priority_queue implementation

const int INF = 1e9 + 19;
const int LIM = 1e5 + 15;

int n, m;
vector<vector<int>> G;
vector<bool> mark;
vector<int> dist;
void dijkstra(int s,vc<vc<pii>> &g){
    mark.resize(g.size());
    dist.resize(g.size());
    fill(dist.begin(),dist.end(), INT_MAX);
    fill(mark.begin(),mark.end(), 0);
    set<pii> S;
    S.insert({dist[s] = 0, s});
    mark[s]=1;
    while(!S.empty()){
        int u = S.begin() -> ss;
        S.erase(S.begin());
        
        for(auto v : g[u])
        {
            if(dist[v.ff] > dist[u] + v.ss && !mark[v.ff])
            {
                mark[v.ff]=1;
                S.erase({dist[v.ff], v.ff}); 
                dist[v.ff] = dist[u] + v.ss;
                S.insert({dist[v.ff], v.ff}); 
            }
        }
    }
}
// set Implementation
