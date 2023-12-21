// adj list
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++) {
		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//do bfs
	parent[s] = -1;
	visited[s] = 1;
	unordered_map<int,bool> visited;
	unordered_map<int,int> parent;
	queue<int> q;
	q.push(s);

	while(!q.empty()) {
		int front = q.front();
		q.pop();

		for(auto i: adj[front]) {
			if(!visited) {
				visited[i] = 1;
				parent[i] = front;
				q.push(i); 
			}

		}
	}