#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (mat[i][j] == 1) {
                    bool isRowGood = true;
                    bool isColGood = true;
                    
                    // Check if this is the only 1 in the row
                    for (int col = 0; col < mat[0].size(); col++) {
                        if (col != j && mat[i][col] == 1) {
                            isRowGood = false;
                            break;
                        }
                    }
                    
                    // Check if this is the only 1 in the column
                    for (int row = 0; row < mat.size(); row++) {
                        if (row != i && mat[row][j] == 1) {
                            isColGood = false;
                            break;   
                        }
                    }
                    
                    if (isRowGood && isColGood) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};

// Helper function to print matrix
void printMatrix(const vector<vector<int>>& mat) {
    cout << "[" << endl;
    for (int i = 0; i < mat.size(); i++) {
        cout << "  [";
        for (int j = 0; j < mat[i].size(); j++) {
            cout << mat[i][j];
            if (j != mat[i].size() - 1) cout << ",";
        }
        cout << "]";
        if (i != mat.size() - 1) cout << ",";
        cout << endl;
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Test case 1: Example from LeetCode
    cout << "Test Case 1:" << endl;
    vector<vector<int>> mat1 = {
        {1, 0, 0},
        {0, 0, 1},
        {1, 0, 0}
    };
    cout << "Input matrix:" << endl;
    printMatrix(mat1);
    int result1 = solution.numSpecial(mat1);
    cout << "Output: " << result1 << endl;
    cout << "Expected: 1" << endl;
    cout << "Explanation: (1, 2) is the only special position" << endl << endl;
    
    // Test case 2: Another example
    cout << "Test Case 2:" << endl;
    vector<vector<int>> mat2 = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    cout << "Input matrix:" << endl;
    printMatrix(mat2);
    int result2 = solution.numSpecial(mat2);
    cout << "Output: " << result2 << endl;
    cout << "Expected: 3" << endl;
    cout << "Explanation: All diagonal positions are special" << endl << endl;
    
    // Test case 3: No special positions
    cout << "Test Case 3:" << endl;
    vector<vector<int>> mat3 = {
        {0, 0, 0, 1},
        {1, 0, 0, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    };
    cout << "Input matrix:" << endl;
    printMatrix(mat3);
    int result3 = solution.numSpecial(mat3);
    cout << "Output: " << result3 << endl;
    cout << "Expected: 2" << endl;
    cout << "Explanation: (0, 3) and (1, 0) are special positions" << endl << endl;
    
    // Test case 4: Single element matrix
    cout << "Test Case 4:" << endl;
    vector<vector<int>> mat4 = {{1}};
    cout << "Input matrix:" << endl;
    printMatrix(mat4);
    int result4 = solution.numSpecial(mat4);
    cout << "Output: " << result4 << endl;
    cout << "Expected: 1" << endl;
    cout << "Explanation: Single element is special" << endl;
    
    return 0;
}