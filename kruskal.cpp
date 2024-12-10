vector<pair<int,int>> kruskal(vector<vector<int>> adj,int V){
    vector<vector<int>> mst;
    vector<pair<int,pair<int,int>> edges;
    vector<int> vis(V,0);
    for(int i=0;i<V;i++){
    for(auto it:adj[i]){
        int adjNode=it.first.second;
        int node=it.first.first;
        int w=it.second;
        edges.push_back({w,{node,adjNode}});
        }
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> pq;
        pq.push({1,{1,4}});
        while(!pq.empty()){
            auto it=pq.front;
            int adjNode=it.first.second;
            int node=it.first.first;
            int w=it.second;
            if(!vis[node])
        {   
            vis[node]=1;
            mst[node].push_back(adjNode);
            mst[adjNode].push_back(node);
            if(isCycle(mst)){
                mst[node].erase(adjNode);
                mst[adjNode].erase(node);01
            }
                for(auto i:edges[node]){
                    int adjN=i.first.second;
                    int n=i.first.first;
                    int w=i.second;
                if(!vis[adjN]){
                    pq.push({w,{adjN,n}});
                    vis[n]=1;
            }
                }
            }
        }
        return mst;
    }
}