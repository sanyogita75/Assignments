graph={
    '5':['3','7'],
    '3':['2','4'],
    '7':['8'],
    '4':['8'],
    '8':[],
    '2':[]
}
visited=[]
def dfs(visited,graph,node):
    if node not in visited:
        print(node)
        visited.append(node)
        for nei in graph[node]:
            dfs(visited,graph,nei)
dfs(visited,graph,'5')

visited2=[]
queue=[]
def bfs(visited2,graph,node):
    visited2.append(node)
    queue.append(node)
    while(queue):
        m=queue.pop(0)
        print(m,end=" ")
        for nei in graph[m]:
            if nei not in visited2:
                visited2.append(nei)
                queue.append(nei)
    
bfs(visited2,graph,'5')
