/*
Author: Shardul Nalegave
Date: 21/01/2024
Problem: Majority Element
https://leetcode.com/problems/majority-element/

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2

Constraints:
n == nums.length
1 <= n <= 5 * 10^4
-10^9 <= nums[i] <= 10^9
*/
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //declaring arr size, limit and unordered map
        int size = nums.size();
        int limit = size/2;
        unordered_map<int,int>map;
        //looping and check
        for(auto num : nums){
            //increasing count in map
            map[num]++;
            //checking winner el
            if(map[num]>limit){
                return num;
            }
        }
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {3, 2, 3};
    cout << "Example 1: " << solution.majorityElement(nums1) << endl;

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Example 2: " << solution.majorityElement(nums2) << endl;

    return 0;
}