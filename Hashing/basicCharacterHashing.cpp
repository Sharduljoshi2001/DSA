#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> getFrequency(string& characters) {
    // Fill in your logic here
    unordered_map<char, int> frequencyMap;
    for(int i=0; i<characters.size();i++){
        frequencyMap[characters[i]]++;
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
        cout << "Enter a string: ";
        string inputString;
        cin >> inputString;
        
        unordered_map<char, int> frequencyResult = getFrequency(inputString);
        
        // Print the frequency map
        for (auto& characterFrequencyPair : frequencyResult) {
            cout << characterFrequencyPair.first << " -> " << characterFrequencyPair.second << endl;
        }
        cout << endl; // Extra newline between test cases
    }
    
    return 0;
}