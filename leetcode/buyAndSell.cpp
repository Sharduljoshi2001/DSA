#include <iostream>
#include <vector>
#include <algorithm> // max function ke liye
#include <climits>   // INT_MAX ke liye

using namespace std;

// --- TERA CODE START (NO CHANGES) ---
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit =0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         int currentProfit = prices[j]-prices[i];
        //         profit = max(profit, currentProfit);
        //     }
        // }
        // return profit;
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(int i=0; i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }else{
                maxProfit = max(prices[i]-minPrice, maxProfit);
            }
        }
        return maxProfit;
    }
};
// --- TERA CODE END ---

// Helper function to print vector (taaki output sundar dikhe)
void printVector(const vector<int>& vec) {
    cout << "[";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ",";
    }
    cout << "]";
}

int main() {
    Solution sol;

    // --- TEST CASE 1 (Standard Example) ---
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    cout << "Test Case 1:" << endl;
    cout << "Input: prices = "; printVector(prices1); cout << endl;
    cout << "Expected: 5" << endl;
    cout << "Output: " << sol.maxProfit(prices1) << endl;
    cout << "---------------------------------" << endl;

    // --- TEST CASE 2 (Descending Order - No Profit) ---
    vector<int> prices2 = {7, 6, 4, 3, 1};
    cout << "Test Case 2:" << endl;
    cout << "Input: prices = "; printVector(prices2); cout << endl;
    cout << "Expected: 0" << endl;
    cout << "Output: " << sol.maxProfit(prices2) << endl;
    cout << "---------------------------------" << endl;

    // --- TEST CASE 3 (Random Mix) ---
    vector<int> prices3 = {2, 4, 1};
    cout << "Test Case 3:" << endl;
    cout << "Input: prices = "; printVector(prices3); cout << endl;
    cout << "Expected: 2" << endl; // Buy at 2, Sell at 4 (Profit 2). Buy at 1 (End) -> No sell possible.
    cout << "Output: " << sol.maxProfit(prices3) << endl;
    cout << "---------------------------------" << endl;

    return 0;
}