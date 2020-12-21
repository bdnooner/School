#pragma once

#include <iostream>

class Graph
{
    public:
        Graph();
        Graph(int numVertices);
        void addEdge(int i, int j);
        void removeEdge(int i, int j);
        int getVertices();
        void displayGraph();
        void DFS (int start, bool hasVisted[]);
        ~Graph();
    
    private:
        bool **adjMatrix;
        int vertices;
};