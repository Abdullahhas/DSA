#include <iostream>

using namespace std;

int** createGraphMatrix(int vertices) {
    // Allocate memory for the 2D array (adjacency matrix)
    int** matrix = new int*[vertices];
    for (int i = 0; i < vertices; i++) {
        matrix[i] = new int[vertices]();
    }

    // Input the edges
    int edges;
    cout << "Enter the number of edges: ";
    cin >> edges;

    for (int i = 0; i < edges; i++) {
        int src, dest;
        cout << "Enter edge " << i + 1 << " (source destination): ";
        cin >> src >> dest;

        // Ensure source and destination vertices are within bounds
        if (src >= 0 && src < vertices && dest >= 0 && dest < vertices) {
            matrix[src][dest] = 1;
        } else {
            cout << "Invalid edge: " << src << " -> " << dest << endl;
        }
    }

    return matrix;
}

void printGraphMatrix(int** matrix, int vertices) {
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void deleteGraphMatrix(int** matrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    int** graphMatrix = createGraphMatrix(vertices);

    printGraphMatrix(graphMatrix, vertices);

    deleteGraphMatrix(graphMatrix, vertices);

    return 0;
}
    