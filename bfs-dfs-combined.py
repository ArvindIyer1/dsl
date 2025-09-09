def bfs(adj,start):
	visited = []
	queue = [start]
	while queue :
		node = queue.pop(0)
		if node not  in visited :
			print(node,end = " ,")
			visited.append(node)
			queue += graph[node]

graph = {0:[1,2],
            1:[0,3],
	    2:[0,3],
	    3:[1,2]}
	     


print("bfs traversal  :")
bfs(graph,0)

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
