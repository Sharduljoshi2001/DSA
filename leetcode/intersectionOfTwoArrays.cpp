/*
Author: Shardul Nalegave
Date: 21/01/2024
Problem: Intersection of Two Arrays
https://leetcode.com/problems/intersection-of-two-arrays/

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Constraints:
1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        vector<int> result;
        for (int num : nums2) {
            if (set1.count(num)) {
                result.push_back(num);
                set1.erase(num);
            }
        }
        return result;
    }
};

void printVector(const vector<int>& vec) {
    cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i] << (i == vec.size() - 1 ? "" : ", ");
    }
    cout << "]" << endl;
}

int main() {
    Solution solution;

    vector<int> nums1_1 = {1, 2, 2, 1};
    vector<int> nums2_1 = {2, 2};
    cout << "Example 1: ";
    vector<int> result1 = solution.intersection(nums1_1, nums2_1);
    printVector(result1);

    vector<int> nums1_2 = {4, 9, 5};
    vector<int> nums2_2 = {9, 4, 9, 8, 4};
    cout << "Example 2: ";
    vector<int> result2 = solution.intersection(nums1_2, nums2_2);
    printVector(result2);

    return 0;
}
