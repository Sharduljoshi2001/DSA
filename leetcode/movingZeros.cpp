#include <iostream>
#include <vector>
#include <algorithm>

// LeetCode Solution Class
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int size = nums.size();
        int insertPosPtr = 0;
        for(int movingPtr = 0 ; movingPtr<size; movingPtr++){
            if(nums[movingPtr]!=0){
                // swap(nums[movingPtr], nums[insertPosPtr]);
                int temp = nums[insertPosPtr];
                nums[insertPosPtr]= nums[movingPtr];
                nums[movingPtr]= temp;
                insertPosPtr++;
            }
        }
    }
};

// Helper function to print a vector
void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Main function to test the solution
int main() {
    // Create a Solution object
    Solution sol;

    // Create a test case
    std::vector<int> nums = {0, 1, 0, 3, 12};

    // Print the original array
    std::cout << "Original array: ";
    printVector(nums);

    // Call the moveZeroes function
    sol.moveZeroes(nums);

    // Print the modified array
    std::cout << "Array after moving zeroes: ";
    printVector(nums);

    return 0;
}