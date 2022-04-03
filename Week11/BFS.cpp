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
    void addEdge(vector<Node*> adj[], int s, int d) {
    Node* n1 = new Node(s) ;
    Node* n2 = new Node(d) ;
    

    adj[s].push_back(n2);
    adj[d].push_back(n1);
    }
    // Print the graph
    void printGraph(vector<Node*> adj[], int V) {
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
class Node
{
    public:
        int key;
        Node* p;
        int distance;
        string color;
        Node(int num)
        {
            this ->color = "white";
            this ->distance = 0;
            this ->p = NULL;
            this ->key = num;
        }

};
int main() {
    int V = 5;
    // Create a graph
    vector<Node*> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    printGraph(adj, V);
}