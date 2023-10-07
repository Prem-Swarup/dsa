  list<int> adj[n] ;
  int m=edges.size() ;
  for(int i=0; i<m; ++i) {
    adj[edges[i][0]].push_back(edges[i][1]) ;
    adj[edges[i][1]].push_back(edges[i][0]) ;
  }
