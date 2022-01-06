Graph = {'A': ['C', 'D'],
         'B': ['E'],
         'C': ['F', 'D'],
         'D': ['B', 'E', 'F'],
         'E': ['G'],
         'F': [],
         'G': []}

sortedList = []  # this is the sorted list
num = {}    # This is the time discovered by each vertex
TSNum = {}  # This is the time based on sort
i = j = 1


def T_sort(v):  # recursive function
    global i, j
    num[v] = i
    i += 1
    for u in Graph[v]:
        if num[u] == 0:
            T_sort(u)
        elif TSNum[u] == 0:
            # if num(u) == 0 and TSNum[u] == 0 then graph has a cycle | not a DAG (Directed Acyclic Graph)
            print('error | cycle detected')
    TSNum[v] = j
    j += 1
    sortedList.append(v)


def topological_sort(graph):
    for v in graph:
        # The discovered time and sorted time for all vertices are set to 0
        num[v] = 0
        TSNum[v] = 0
    for v in graph:
        if num[v] == 0:
            T_sort(v)


topological_sort(Graph)
sortedList.reverse()
print(sortedList)
