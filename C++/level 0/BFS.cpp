// Breadth-first search algoritm
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// BFS Traversal of an undirected and unweighted graph.
void createAndAddEdge(vector <int> adjList[], int u, int v){
  adjList[u].push_back(v);
  adjList[v].push_back(u); // do this because undirected graph
} // createAndAddEdge(vector <int> List[], int u, int v)

void BFS(vector <int> adjList[], vector <bool> visitedVertex, int source){
  queue <int> Q; //set up Queue for BFS
  int v;
  Q.push(source);
  while (!Q.empty()){
    v = Q.front();
    visitedVertex.at(v) = true;
    Q.pop();
    cout << v << " "; // Print Vertex
    for (vector<int>::iterator it = adjList[v].begin(); it != adjList[v].end(); it++) // Visit all children
      if (!visitedVertex.at(*it)){
        Q.push(*it); // Push unvisted vertex onto the queue
        visitedVertex.at(*it) = true;
      } // if not visited
  } // While Queue is not empty
  cout << endl;
} // BFS

/* Breadth-first search for directed graph
bool canVisitAllRooms(vector<vector<int>>& rooms) { 
    vector<bool> visited(rooms.size(), false);
    queue<int> Q; 
    Q.push(0); // Start with room 0

    while (!Q.empty()) {
        int currentRoom = Q.front();
        Q.pop();

        if (!visited[currentRoom]) {
            visited[currentRoom] = true; // Mark the room as visited

            // Add to the queue all unvisited rooms for which we have keys in the current room
            for (int key : rooms[currentRoom]) {
                if (!visited[key]) {
                    Q.push(key);
                }
            }
        }
    }

    // Check if all rooms have been visited
    for (bool visitedRoom : visited) {
        if (!visitedRoom) return false;
    }
    return true;
}

*/



int main (void){
  // Idea is to implement the adjacency list as an array of vectors:
  const int numVertices = 6; // 6 vertices (0,1,2,3,4,5)
  int source = 0;
  vector<int> adjList[numVertices]; // Create an array of vectors
  vector <bool> visitedVertex(numVertices, false);
  createAndAddEdge(adjList, 0, 1);
  createAndAddEdge(adjList, 0, 2);
  createAndAddEdge(adjList, 1, 5);
  createAndAddEdge(adjList, 2, 3);
  createAndAddEdge(adjList, 2, 4);
  createAndAddEdge(adjList, 3, 3);
  createAndAddEdge(adjList, 4, 4);
  createAndAddEdge(adjList, 5, 5);
  BFS(adjList, visitedVertex, source); // Perform BFS given graph G and a source s
  //Should Print: 0 1 2 5 3 4

} // main()