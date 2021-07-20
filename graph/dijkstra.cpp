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

void dijkstra(int s){
    fill(dist.begin(),dist.end(), LIM);
    
    set<pi> S;
    S.insert({dist[s] = 0, s});
    while(!S.empty()){
        int u = S.begin() -> se;
        S.erase(S.begin());
        
        for(auto v : G[u])
        {
            if(dist[v.fi] > dist[u] + v.se)
            {
                S.erase({dist[v.fi], v.fi}); // removing old pair
                dist[v.fi] = dist[u] + v.se;
                S.insert({dist[v.fi], v.fi}); // adding new pair
            }
        }
    }
}
// set Implementation
