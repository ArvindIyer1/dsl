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
