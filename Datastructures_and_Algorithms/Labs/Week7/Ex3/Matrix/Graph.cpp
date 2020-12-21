#include "Graph.h"

using namespace std;

Graph::Graph()
{
    this->vertices = 10;
    adjMatrix = new bool*[vertices];
    for (int i = 0; i < vertices; i++)
    {
        adjMatrix[i] = new bool[vertices];
        for (int j = 0; j < vertices; j++)
            adjMatrix[i][j] = false;
    }
}

Graph::Graph(int x)
{
    this->vertices = x;
    adjMatrix = new bool*[vertices];
    for (int i = 0; i < vertices; i++)
    {
        adjMatrix[i] = new bool[vertices];
        for (int j = 0; j < vertices; j++)
            adjMatrix[i][j] = false;
    }
}

Graph::~Graph()
{
    for(int i = 0; i < vertices; i++)
        delete[] adjMatrix[i];
    
    delete[] adjMatrix;
}

void Graph::addEdge(int i, int j)
{
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
}

void Graph::removeEdge(int i, int j)
{
    adjMatrix[i][j] = false;
    adjMatrix[j][i] = false;
}

int Graph::getVertices()
{
    return this->vertices;
}

void Graph::displayGraph()
{
    for(int i = 0; i < vertices; i++)
    {
        cout << i << ":";
        
        for(int j = 0; j < vertices; j++)
            cout << adjMatrix[i][j]<< " ";
        
        cout << endl;
    }
}

void Graph::DFS(int start, bool hasVisited[])
{
    // Print the current node 
    cout << start << " "; 
  
    // Set current node as visited 
    hasVisited[start] = true; 
  
    // For every node of the graph 
    for (int i = 0; i < vertices; i++) { 
  
        // If some node is adjacent to the current node 
        // and it has not already been visited 
        if (adjMatrix[start][i] == 1 && (!hasVisited[i])) { 
            DFS(i, hasVisited); 
        } 
    } 
}
 