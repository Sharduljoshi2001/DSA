#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int row = matrix.size();
        int col = matrix[0].size();
        int top = 0;
        int bottom = row - 1;
        int left = 0;
        int right = col - 1;
        while (top <= bottom && left <= right) {
            for (int i = left; i <= right; i++) {
                result.emplace_back(matrix[top][i]);
            }
            top++;
            // going right to bottom (right side wall)
            for (int i = top; i <= bottom; i++) {
                result.emplace_back(matrix[i][right]);
            };
            right--;
            // going bottom to left (bottom wall)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    result.emplace_back(matrix[bottom][i]);
                }
                bottom--;
            }
            // going bottom to top (left side wall)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    result.emplace_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};

// Test function
void printVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Test case 1: 3x3 matrix
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    cout << "Test Case 1:" << endl;
    cout << "Input: [[1,2,3],[4,5,6],[7,8,9]]" << endl;
    vector<int> result1 = solution.spiralOrder(matrix1);
    cout << "Output: ";
    printVector(result1);
    cout << "Expected: [1,2,3,6,9,8,7,4,5]" << endl << endl;
    
    // Test case 2: 3x4 matrix
    vector<vector<int>> matrix2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    cout << "Test Case 2:" << endl;
    cout << "Input: [[1,2,3,4],[5,6,7,8],[9,10,11,12]]" << endl;
    vector<int> result2 = solution.spiralOrder(matrix2);
    cout << "Output: ";
    printVector(result2);
    cout << "Expected: [1,2,3,4,8,12,11,10,9,5,6,7]" << endl << endl;
    
    // Test case 3: 1x3 matrix (single row)
    vector<vector<int>> matrix3 = {{1, 2, 3}};
    
    cout << "Test Case 3:" << endl;
    cout << "Input: [[1,2,3]]" << endl;
    vector<int> result3 = solution.spiralOrder(matrix3);
    cout << "Output: ";
    printVector(result3);
    cout << "Expected: [1,2,3]" << endl;
    
    return 0;
}