#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Swap characters at left and right positions
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            
            // Move pointers toward center
            left++;
            right--;
        }
    }
};

// Helper function to print vector of chars
void printVector(const vector<char>& s) {
    cout << "[";
    for (int i = 0; i < s.size(); i++) {
        cout << "\"" << s[i] << "\"";
        if (i != s.size() - 1) cout << ",";
    }
    cout << "]" << endl;
}

// Helper function to convert string to vector<char>
vector<char> stringToVector(const string& str) {
    vector<char> result;
    for (char c : str) {
        result.push_back(c);
    }
    return result;
}

int main() {
    Solution solution;
    
    // Test case 1: Standard case
    cout << "Test Case 1:" << endl;
    vector<char> s1 = stringToVector("hello");
    cout << "Input: ";
    printVector(s1);
    solution.reverseString(s1);
    cout << "Output: ";
    printVector(s1);
    cout << "Expected: [\"o\",\"l\",\"l\",\"e\",\"h\"]" << endl << endl;
    
    // Test case 2: Palindrome
    cout << "Test Case 2:" << endl;
    vector<char> s2 = stringToVector("Hannah");
    cout << "Input: ";
    printVector(s2);
    solution.reverseString(s2);
    cout << "Output: ";
    printVector(s2);
    cout << "Expected: [\"h\",\"a\",\"n\",\"n\",\"a\",\"H\"]" << endl << endl;
    
    // Test case 3: Single character
    cout << "Test Case 3:" << endl;
    vector<char> s3 = stringToVector("A");
    cout << "Input: ";
    printVector(s3);
    solution.reverseString(s3);
    cout << "Output: ";
    printVector(s3);
    cout << "Expected: [\"A\"]" << endl << endl;
    
    // Test case 4: Two characters
    cout << "Test Case 4:" << endl;
    vector<char> s4 = stringToVector("ab");
    cout << "Input: ";
    printVector(s4);
    solution.reverseString(s4);
    cout << "Output: ";
    printVector(s4);
    cout << "Expected: [\"b\",\"a\"]" << endl << endl;
    
    // Test case 5: Empty vector (edge case)
    cout << "Test Case 5:" << endl;
    vector<char> s5;
    cout << "Input: ";
    printVector(s5);
    solution.reverseString(s5);
    cout << "Output: ";
    printVector(s5);
    cout << "Expected: []" << endl << endl;
    
    // Test case 6: Numbers and symbols
    cout << "Test Case 6:" << endl;
    vector<char> s6 = stringToVector("12345");
    cout << "Input: ";
    printVector(s6);
    solution.reverseString(s6);
    cout << "Output: ";
    printVector(s6);
    cout << "Expected: [\"5\",\"4\",\"3\",\"2\",\"1\"]" << endl;
    
    return 0;
}