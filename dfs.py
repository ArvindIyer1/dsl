def dfs(adj,v,visited):
	print(v,end = "  , ")
	visited.add(v)
	n = len(adj)
	for u in range(n):
		if adj[v][u] == 1 and u not in visited:
			dfs(adj,u,visited)

adjMatrix =[[0,1,1,0],
	    [1,0,0,1],
	    [1,0,1,0],
	    [0,1,1,0]]

visited = set()
print("DFS inversal from node :")
dfs(adjMatrix,0,visited)
