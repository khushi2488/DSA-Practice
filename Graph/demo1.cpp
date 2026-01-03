#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> getNeighbours(
    int node,
    vector<vector<pair<int,int>>> &adj
) {
    return adj[node];
}

int main() {
    int V = 5;
    vector<vector<pair<int, int>>> adj(V);

    int c1 = 1, c2 = 2, c3 = 3, c4 = 4, c5 = 5, c6 = 6;

    adj[0].push_back({1, c1}); 
    adj[1].push_back({0, c1}); // A-B

    adj[0].push_back({2, c2}); 
    adj[2].push_back({0, c2}); // A-C

    adj[1].push_back({3, c3}); 
    adj[3].push_back({1, c3}); // B-D

    adj[2].push_back({3, c4}); 
    adj[3].push_back({2, c4}); // C-D

    adj[2].push_back({4, c5}); 
    adj[4].push_back({2, c5}); // C-E

    adj[3].push_back({4, c6}); 
    adj[4].push_back({3, c6}); // D-E

   
    int node = 2;
    vector<pair<int,int>> neighbours = getNeighbours(node, adj);

 
    cout << "Neighbours of node " << char('A' + node) << ":\n";
    for (auto edge : neighbours) {
        cout << " -> " << char('A' + edge.first)
             << " with cost " << edge.second << endl;
    }

    return 0;
}
