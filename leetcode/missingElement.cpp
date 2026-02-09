#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>

// #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // unordered_map<int,int> map;
    //     for(auto num: nums){
    //         map[num]++;
    //     }
    //     for(int i=0;i<=nums.size();i++){
    //         if(!map.count(i)){
    //             return i;
    //         }
    //     }
    //     return -1;
    // }
    int n = nums.size();
    int totalSum = n*(n+1)/2; 
    int total=0;
    for(auto num:nums){
        total += num;
    }
    return totalSum-total;
    }
};

int main() {
    Solution solution;
    
    // Test Case 1
    vector<int> nums1 = {3, 0, 1};
    cout << "Test Case 1: Missing number in {3, 0, 1} is " << solution.missingNumber(nums1) << endl;

    // Test Case 2
    vector<int> nums2 = {0, 1};
    cout << "Test Case 2: Missing number in {0, 1} is " << solution.missingNumber(nums2) << endl;

    // Test Case 3
    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Test Case 3: Missing number in {9, 6, 4, 2, 3, 5, 7, 0, 1} is " << solution.missingNumber(nums3) << endl;

    // Test Case 4
    vector<int> nums4 = {0};
    cout << "Test Case 4: Missing number in {0} is " << solution.missingNumber(nums4) << endl;

    return 0;
}
