#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        vector<int> result(nums.size(), 0);
        int position = result.size() - 1;

        while (left <= right) {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];
            
            // Compare squares and place larger one at current position
            if (leftSquare < rightSquare) {
                result[position] = rightSquare;
                right--;
            } else {
                result[position] = leftSquare;
                left++;
            }
            position--;
        }
        return result;
    }
};

// Helper function to print vector
void printVector(const vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;
    
    // Test case 1: Mixed positive and negative numbers
    cout << "Test Case 1:" << endl;
    vector<int> nums1 = {-4, -1, 0, 3, 10};
    cout << "Input: ";
    printVector(nums1);
    vector<int> result1 = solution.sortedSquares(nums1);
    cout << "Output: ";
    printVector(result1);
    cout << "Expected: [0,1,9,16,100]" << endl;
    cout << "Explanation: Squares are [16,1,0,9,100], after sorting: [0,1,9,16,100]" << endl << endl;
    
    // Test case 2: All negative numbers
    cout << "Test Case 2:" << endl;
    vector<int> nums2 = {-7, -3, -2, -1};
    cout << "Input: ";
    printVector(nums2);
    vector<int> result2 = solution.sortedSquares(nums2);
    cout << "Output: ";
    printVector(result2);
    cout << "Expected: [1,4,9,49]" << endl;
    cout << "Explanation: Squares are [49,9,4,1], after sorting: [1,4,9,49]" << endl << endl;
    
    // Test case 3: All positive numbers
    cout << "Test Case 3:" << endl;
    vector<int> nums3 = {1, 2, 3, 4, 5};
    cout << "Input: ";
    printVector(nums3);
    vector<int> result3 = solution.sortedSquares(nums3);
    cout << "Output: ";
    printVector(result3);
    cout << "Expected: [1,4,9,16,25]" << endl;
    cout << "Explanation: Already sorted positive numbers" << endl << endl;
    
    // Test case 4: Single element
    cout << "Test Case 4:" << endl;
    vector<int> nums4 = {-5};
    cout << "Input: ";
    printVector(nums4);
    vector<int> result4 = solution.sortedSquares(nums4);
    cout << "Output: ";
    printVector(result4);
    cout << "Expected: [25]" << endl;
    cout << "Explanation: Single negative number" << endl << endl;
    
    // Test case 5: Contains zero
    cout << "Test Case 5:" << endl;
    vector<int> nums5 = {-3, -2, 0, 1, 4};
    cout << "Input: ";
    printVector(nums5);
    vector<int> result5 = solution.sortedSquares(nums5);
    cout << "Output: ";
    printVector(result5);
    cout << "Expected: [0,1,4,9,16]" << endl;
    cout << "Explanation: Contains zero which becomes 0 when squared" << endl << endl;
    
    // Test case 6: Large negative numbers
    cout << "Test Case 6:" << endl;
    vector<int> nums6 = {-10000, -9999, -7, 0, 1, 2};
    cout << "Input: ";
    printVector(nums6);
    vector<int> result6 = solution.sortedSquares(nums6);
    cout << "Output: ";
    printVector(result6);
    cout << "Expected: [0,1,4,49,99980001,100000000]" << endl;
    cout << "Explanation: Large numbers test" << endl;
    
    return 0;
}