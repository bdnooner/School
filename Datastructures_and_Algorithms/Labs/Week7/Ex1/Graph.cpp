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
