#include <iostream>
#include <vector>
using namespace std;

// Recursive function to check if a matrix is cool
bool isCoolMatrix(const vector<vector<int>>& matrix, int n, int m, int i, int j) {
    // Base case: If we've checked all possible positions, return true
    if (i >= n - 1 || j >= m - 1) {
        return true;
    }

    // Check the 2x2 sub-matrix starting at (i, j)
    if (matrix[i][j] == matrix[i+1][j] && matrix[i][j] == matrix[i][j+1] && matrix[i][j] == matrix[i+1][j+1]) {
        // If all four cells are the same (either all 0 or all 1), the matrix is not cool
        return false;
    }

    // Check the next column in the same row
    if (!isCoolMatrix(matrix, n, m, i, j + 1)) {
        return false;
    }

    // Check the next row
    return isCoolMatrix(matrix, n, m, i + 1, j);
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> matrix(n, vector<int>(m));
    
    // Read the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Call the recursive function starting from the top-left corner (0,0)
    if (isCoolMatrix(matrix, n, m, 0, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
