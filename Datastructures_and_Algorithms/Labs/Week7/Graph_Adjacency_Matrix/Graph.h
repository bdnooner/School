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
        bool **adjMatrix; //pointer to a pointer for a 2D array of booleans
        int numVertices;
};