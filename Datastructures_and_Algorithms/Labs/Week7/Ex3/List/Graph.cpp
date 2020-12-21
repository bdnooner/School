#include "Graph.h"

using namespace std;

Graph::Graph()
{
    this->vertices = 10;
    array = new AdjList[vertices];

    for (int i = 0; i < vertices; ++i)
        array[i].head = NULL;
}

Graph::Graph(int x)
{
    this->vertices = x;
    array = new AdjList[vertices];

    for (int i = 0; i < vertices; ++i)
        array[i].head = NULL;
}

Graph::~Graph()
{
    delete[] array;
}

void Graph::addEdge(int src, int dest)
{

    AdjListNode* newNode = new AdjListNode;
    newNode->data = dest;
    newNode->next = NULL;

    newNode->next = array[src].head;
    array[src].head = newNode;

    // Since graph is undirected, add an edge from dest to src also
    newNode = new AdjListNode;
    newNode->data = src;
    newNode->next = NULL;

    newNode->next = array[dest].head;
    array[dest].head = newNode;
}

void Graph::displayGraph()
{
    for (int v = 0; v < this->vertices; ++v)
    {
        AdjListNode* tmp = array[v].head;

        cout << "\nVertex " << v << ":\n head";

        while (tmp)
        {
            cout << " -> " << tmp->data;
            tmp = tmp->next;
        }
        cout << endl;
    }
}

// DFS traversal of the vertices reachable from v.
// It uses recursive DFSUtil()
void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool* visited = new bool[vertices];
    for (int i = 0; i < vertices; i++)
        visited[i] = false;
 
    // Call the recursive helper function
    // to print DFS traversal
    DFSUtil(v, visited);
}


void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    for (int i = 0;i < vertices; i++)
        if (!visited[i]) DFSUtil(i, visited);
}
