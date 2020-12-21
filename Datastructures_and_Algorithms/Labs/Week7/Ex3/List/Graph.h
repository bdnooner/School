#pragma once

#include <iostream>

struct AdjListNode
{
    int data;
    AdjListNode *next;
};

struct AdjList
{
    AdjListNode *head;
};

class Graph
{
    public:
        Graph();
        Graph(int vertices);
        void addEdge(int source, int destination);
        void displayGraph();
        void DFS(int v);
        ~Graph();
    
    private:
        AdjList* array; 
        int vertices;
        void DFSUtil(int v, bool visited[]);

};