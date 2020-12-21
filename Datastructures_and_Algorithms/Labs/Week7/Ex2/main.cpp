/***************************************************************************
  CEIS 295 Week 7 Lab
  Exercise 2
  Benjamin Nooner
  "Implement a Graph class using the adjacency list to represent a graph"
***************************************************************************/
#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
    //create a Graph object
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 3);
    graph.addEdge(1, 2);
    graph.addEdge(1, 1);
    graph.addEdge(3, 3);


    graph.displayGraph();

    cout << "\n\nPress any key to quit...\n";
	cin.clear();
	cin.get();

    return 0;
}