#include "Graph.h"

using namespace std;

Graph::Graph()
{
    this->numVertices = 10;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++)
    {
        adjMatrix[i] = new bool[numVertices];
        for (int j = 0; j < numVertices; j++)
            adjMatrix[i][j] = false;
    }
}

Graph::Graph(int x)
{
    this->numVertices = x;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++)
    {
        adjMatrix[i] = new bool[numVertices];
        for (int j = 0; j < numVertices; j++)
            adjMatrix[i][j] = false;
    }
}

Graph::~Graph()
{
    for(int i = 0; i < numVertices; i++)
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
    for(int i = 0; i < numVertices; i++)
    {
        cout << i << ":";
        
        for(int j = 0; j < numVertices; j++)
            cout << adjMatrix[i][j]<< " ";
        
        cout << endl;
    }
}
