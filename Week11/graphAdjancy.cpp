#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Graph{
    int numVertices;
    public:
    Graph(int V){}};
    // void addEdge(int src, int dest){
    // }
    // 
    void addEdge(vector<int> adj[], int s, int d) {
    adj[s].push_back(d);
    adj[d].push_back(s);
    }
    // Print the graph
    void printGraph(vector<int> adj[], int V) {
        for (int i = 0; i < V; i++)
        {
            if (adj[i].size() != 0){

            cout<<i<<"->";
            for (int j = 0; j < adj[i].size(); j++)
            {
                cout<<adj[i][j]<<"->";
            }   
                cout << endl;
            }
        }
    }
int main() {
    int V = 5;
    // Create a graph
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    printGraph(adj, V);
}