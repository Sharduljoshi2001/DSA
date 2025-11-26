#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = n - 1;
        int val = 1;
        
        while (top <= bottom && left <= right) {
            // Fill top row from left to right
            for (int i = left; i <= right; i++) {
                matrix[top][i] = val++;
            }
            top++;
            
            // Fill right column from top to bottom
            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = val++;
            }
            right--;
            
            // Fill bottom row from right to left
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    matrix[bottom][i] = val++;
                }
                bottom--;
            }
            
            // Fill left column from bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left] = val++;
                }
                left++;
            }
        }
        return matrix;
    }
};

// Helper function to print matrix
void printMatrix(const vector<vector<int>>& matrix) {
    cout << "[" << endl;
    for (int i = 0; i < matrix.size(); i++) {
        cout << "  [";
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j];
            if (j != matrix[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != matrix.size() - 1) cout << ",";
        cout << endl;
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Test case 1: n = 3
    cout << "Test Case 1: n = 3" << endl;
    vector<vector<int>> result1 = solution.generateMatrix(3);
    cout << "Output:" << endl;
    printMatrix(result1);
    cout << "Expected: [[1,2,3],[8,9,4],[7,6,5]]" << endl << endl;
    
    // Test case 2: n = 1
    cout << "Test Case 2: n = 1" << endl;
    vector<vector<int>> result2 = solution.generateMatrix(1);
    cout << "Output:" << endl;
    printMatrix(result2);
    cout << "Expected: [[1]]" << endl << endl;
    
    // Test case 3: n = 4
    cout << "Test Case 3: n = 4" << endl;
    vector<vector<int>> result3 = solution.generateMatrix(4);
    cout << "Output:" << endl;
    printMatrix(result3);
    cout << "Expected: [[1,2,3,4],[12,13,14,5],[11,16,15,6],[10,9,8,7]]" << endl;
    
    return 0;
}