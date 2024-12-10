vector<int> dijik(vector<vector<int>>& adj,int V){
    vector<int> parent[V+1];
    for(int i=1;i<=V;i++){
        parent[i]=i;
    }
    vector<int> dist(V+1,1e9);
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    dist[1]=1;
    pq.push({0,1});
    while(!pq.empty()) {       
        auto it=pq.top();
        int node=it.second();
        int dis=it.first();
        pq.pop();
        for(auto it:adj[node]){
            int adjNode=it.first;
            int edW=it.second;
            if(dis+edW<dis[adjNode]){
                dis[adjNode]=dis+edW;
                pq.push({dist+edW,adjNode});
                parent[adjNode]=node;
            }
        }
    }
    vector<path> p;
    int node=V;
    while(parent[node]!=node){
        path.push_back(node);
        node=parent[node];
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    return path;
}