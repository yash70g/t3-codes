vector<pair{int,int}> mst(vector<vector<int>> adj,int V){
    priority_queue<pair<pair<int,int>,int>>,vector<pair<pair<int,int>,int>>,greater<pair<pair<int,int>,int>> pq;
    // wt,<node,node>
    vector<int> vis(V,0);
    vector<pair{int,int}> mst;
    pq.push({{0,-1},0});
    while(!pq.empty()){
        int node=pq.front().first.first;
        int parent=pq.front().first.second;
        int w=pq.front().second;
        pq.pop();
        if(vis[node]==1) continue;
                vis[adjNode]=1;
        for(auto it:adj[node]){
            int adjNode=it.first.first;
            int parent=it.first.second;
            int w=it.second;
            if(!vis[adjNode]){
                pq.push({{adjNode,parent},w});
            }
        }
    mst.push({node,parent});
    }
    return mst;
}