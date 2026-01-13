#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>

// Using the standard namespace for convenience
using namespace std;

// Class to encapsulate the solution
class Solution {
public:
    /**
     * @brief Finds two numbers such that they add up to a specific target.
     * 
     * @param nums A vector of integers.
     * @param target The target sum.
     * @return A vector of two integers representing the indices of the two numbers.
     */
    vector<int> twoSum(vector<int>& nums, int target) {
        // --- Your solution code goes here ---
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numMap.count(complement)) {
                return {numMap[complement], i};
            }
            numMap[nums[i]] = i;
        }
        return {}; // Should not be reached given the problem constraints
    }
};

// Main function for testing the solution
int main() {
    Solution solution;

    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Example 1: [" << result1[0] << ", " << result1[1] << "]" << endl; // Expected: [0, 1]

    // Example 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Example 2: [" << result2[0] << ", " << result2[1] << "]" << endl; // Expected: [1, 2]

    // Example 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    cout << "Example 3: [" << result3[0] << ", " << result3[1] << "]" << endl; // Expected: [0, 1]

    return 0;
}
