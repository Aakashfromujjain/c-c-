#include <bits/stdc++.h>
using namespace std;

// Function for finding the determinant of a matrix.
int getDet(vector<vector<int>>& mat, int n) {
  
    // Base case: if the matrix is 1x1
    if (n == 1) {
        return mat[0][0];
    }
    
    // Base case for 2x2 matrix
    if (n == 2) {
        return mat[0][0] * mat[1][1] - 
               mat[0][1] * mat[1][0];
    }
    
    // Recursive case for larger matrices
    int res = 0;
    for (int col = 0; col < n; ++col) {
      
        // Create a submatrix by removing the first 
        // row and the current column
        vector<vector<int>> sub(n - 1, vector<int>(n - 1));
        for (int i = 1; i < n; ++i) {
            int subcol = 0;
            for (int j = 0; j < n; ++j) {
              
                // Skip the current column
                if (j == col) continue; 
              
                // Fill the submatrix
                sub[i - 1][subcol++] = mat[i][j]; 
            }
        }
      
        // Cofactor expansion
        int sign = (col % 2 == 0) ? 1 : -1; 
        res += sign * mat[0][col] * getDet(sub, n - 1);
    }
    
    return res; 
}

// Driver program to test the above function
int main() {
    vector<vector<int>> mat = { { 1, 0, 2, -1 },
                                 { 3, 0, 0, 5 },
                                 { 2, 1, 4, -3 },
                                 { 1, 0, 5, 0 } };
    cout << getDet(mat, mat.size()) << endl;
    return 0;
}
