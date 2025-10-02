#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, int> getFrequency(vector<int>& numbers) {
    // Fill in your logic here
    unordered_map<int, int> frequencyMap;
    for(int i=0;i<numbers.size();i++){
        frequencyMap[numbers[i]]++;
    }
    return frequencyMap;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout << "Enter the number of test cases: ";
    int numberOfTestCases;
    cin >> numberOfTestCases;
    
    while (numberOfTestCases--) {
        cout << "Enter the size of the array: ";
        int arraySize;
        cin >> arraySize;
        
        cout << "Enter " << arraySize << " integers: ";
        vector<int> inputNumbers(arraySize);
        for (int index = 0; index < arraySize; index++) {
            cin >> inputNumbers[index];
        }
        
        unordered_map<int, int> frequencyResult = getFrequency(inputNumbers);
        
        // Print the frequency map
        for (auto& elementFrequencyPair : frequencyResult) {
            cout << elementFrequencyPair.first << " -> " << elementFrequencyPair.second << endl;
        }
        cout << endl; // Extra newline between test cases
    }
    
    return 0;
}