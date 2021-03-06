/***************************************************************************
  CEIS 295 Week 7 Lab
  Exercise 3 (Adjacency Matrix)
  Benjamin Nooner
  "Add a method to both of the Graph classes developed in the previous exercises to print the graph nodes using a depth-first search traversal."
***************************************************************************/
#include <iostream>
#include <vector>
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


  bool hasVisted[graph.getVertices()];
  for (int i = 0; i < graph.getVertices(); i++)
    hasVisted[i] = false;

  graph.DFS(0, hasVisted);

  cout << "\n\nPress any key to quit...\n";
	cin.clear();
	cin.get();

  return 0;
}