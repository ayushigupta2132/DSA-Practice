#include <iostream>
using namespace std;

// Function to check if it's safe to color a node
bool isSafe(int node, int color[], bool graph[101][101], int n, int col) {
    for (int k = 0; k < n; k++) {
        if (k != node && graph[k][node] == 1 && color[k] == col) {
            return false;
        }
    }
    return true;
}

// Backtracking function
bool solve(int node, int color[], int m, int N, bool graph[101][101]) {
    if (node == N) {
        return true;
    }

    for (int i = 1; i <= m; i++) {
        if (isSafe(node, color, graph, N, i)) {
            color[node] = i;

            if (solve(node + 1, color, m, N, graph))
                return true;

            // backtrack
            color[node] = 0;
        }
    }

    return false;
}

// Main graph coloring function
bool graphColoring(bool graph[101][101], int m, int N) {
    int color[101] = {0};

    if (solve(0, color, m, N, graph))
        return true;

    return false;
}

// DRIVER CODE
int main() {
    int N = 4; // number of nodes
    int m = 3; // number of colors

    bool graph[101][101] = {0};

    // Example graph (adjacency matrix)
    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][2] = graph[2][1] = 1;
    graph[1][3] = graph[3][1] = 1;

    if (graphColoring(graph, m, N))
        cout << "Graph can be colored with " << m << " colors\n";
    else
        cout << "Not possible to color with " << m << " colors\n";

    return 0;
}