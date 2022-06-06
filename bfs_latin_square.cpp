#include<iostream>
#include<vector>
#include<list>
using namespace std;
class Graph
{
    int V;
    vector<list<int>> adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void createGraph(int n, Graph& g);
    void BFS(int s);
};
