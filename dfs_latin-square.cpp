#include <iostream>
#include <map>
#include <list>
using namespace std;

class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > adj;
    void addEdge(int v, int w);
    void createGraph(int n, Graph &g);
    void DFS(int v);
};
