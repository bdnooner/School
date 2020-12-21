#pragma once

#include <iostream>

class Graph
{
    public:
        Graph();
        Graph(int numVertices);
        void addEdge(int i, int j);
        void removeEdge(int i, int j);
        void displayGraph();
        ~Graph();
    
    private:
        bool **adjMatrix;
        int vertices;
};