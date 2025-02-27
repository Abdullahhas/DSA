#include <iostream>
using namespace std;

// Function to check if it's safe to place a queen at position (x, y) on the board
bool isSafe(int board[4][4], int x, int y, int n) {
    // Check if there is a queen in the same column above this position
    for (int i = 0; i < x; i++) {
        if (board[i][y] == 1) {
            return false;
        }
    }

    // Check the upper left diagonal
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0) {
        if (board[row][col] == 1) {
            return false;
        }
        row--;
        col--;
    }

    // Check the upper right diagonal
    row = x;
    col = y;
    while (row >= 0 && col < n) {
        if (board[row][col] == 1) {
            return false;
        }
        row--;
        col++;
    }

    // If no conflicts found, it's safe to place the queen
    return true;
}

// Recursive function to solve the N-Queens problem
bool nQueen(int board[4][4], int x, int n) {
    // Base case: If all queens are placed, return true
    if (x >= n) {
        return true;
    }

    // Try placing the queen in each column of the current row
    for (int col = 0; col < n; col++) {
        if (isSafe(board, x, col, n)) {
            // Place the queen at this position
            board[x][col] = 1;

            // Recur to place rest of the queens
            if (nQueen(board, x + 1, n)) {
                return true;
            }

            // If placing queen at (x, col) doesn't lead to a solution,
            // backtrack and try placing it in another column
            board[x][col] = 0;
        }
    }
    
    // If no column is suitable for this row, return false
    return false;
}

int main() {
    

    
        // Initialize a chessboard with all zeros (no queens)
        int board[4][4] = {0};

        // Call the nQueen function to solve the problem
        if (nQueen(board, 0, 4)) {
            cout << "Solution found:" << endl;
            // Print the solution board
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    cout << board[i][j] << " ";
                }
                cout << endl;
            }
        } else {
            // If no solution is found, print this message
            cout << "No solution exists." << endl;
        }
        return 0;
    }

    


