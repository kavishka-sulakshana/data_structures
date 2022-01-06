Graph = {'A': ['C', 'D'],
         'B': ['E'],
         'C': ['F', 'D'],
         'D': ['B', 'E', 'F'],
         'E': ['G'],
         'F': [],
         'G': []}

sortedList = []
num = {}
TSNum = {}
i = j = 1


def T_sort(v):
    global i, j
    num[v] = i
    i += 1
    for u in Graph[v]:
        if num[u] == 0:
            T_sort(u)
        elif TSNum[u] == 0:
            print('error | cycle detected')
    TSNum[v] = j
    j += 1
    sortedList.append(v)


def topological_sort(graph):
    for v in graph:
        num[v] = 0
        TSNum[v] = 0
    for v in graph:
        if num[v] == 0:
            T_sort(v)


topological_sort(Graph)
sortedList.reverse()
print(sortedList)
