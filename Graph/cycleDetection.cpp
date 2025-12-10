//  Cycle Detection In Undirected Graph


// error
// bool isCyclicBFS(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int> > &adj){
//     unordered_map<int, int> parent;

//     parent[src] = -1;
//     visited[src] = 1;
//     queue<int> q;
//     q.push(src);
    
//     while(!q.empty()){
//         int front = q.front();
//         q.pop();

//         for(auto neighbour: adj[front]){
//             if(visited[neighbour] == true && neighbour != parent[front]){
//                 return true;
//             }
//             else if(visited[neighbour]){
//                 q.push(neighbour);
//                 visited[neighbour] = 1;
//                 parent[neighbour] = front;
//             }
//         }
//     }
//     return false;
// }


// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     // Write your code here.
//     unordered_map<int, list<int> > adj;
//     for(int i=0; i<m; i++){
//         int u = edges[i][0];
//         int v = edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);

//     }

//     unordered_map<int, bool> visited;
//     for(int i=0; i<n; i++){
//         if(!visited[i]){
//             bool ans = isCyvlicBFS(i, visited, adj);
//             if(ans == 1)
//                 return "Yes";
//         }
//     }
//     return "No";
// }


// correct code
#include <unordered_map>
#include <queue>
#include <list>
#include <vector>
#include <string>
using namespace std;

// Using BFS
bool isCyclicBFS(int src, unordered_map<int, bool> &visited,
                 unordered_map<int, list<int>> &adj) {

    unordered_map<int, int> parent;
    queue<int> q;

    parent[src] = -1;
    visited[src] = true;
    q.push(src);

    while (!q.empty()) {
        int front = q.front();
        q.pop();

        for (auto neighbour : adj[front]) {
            if (!visited[neighbour]) {                 // unvisited -> normal BFS step
                visited[neighbour] = true;
                parent[neighbour] = front;
                q.push(neighbour);
            }
            else if (parent[front] != neighbour) {     // visited and not parent -> cycle
                return true;
            }
        }
    }
    return false;
}

string cycleDetection(vector<vector<int>>& edges, int n, int m) {
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < m; i++) {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);   // undirected
    }

    unordered_map<int, bool> visited;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            if (isCyclicBFS(i, visited, adj)) {
                return "Yes";
            }
        }
    }
    return "No";
}



// Using DFS

