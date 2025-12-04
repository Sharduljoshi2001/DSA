#include <string>
#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            // Skip non-alphanumeric characters from left
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            
            // Skip non-alphanumeric characters from right
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            
            // Compare characters (case insensitive)
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    // Test case 1: Standard palindrome
    cout << "Test Case 1:" << endl;
    string s1 = "A man, a plan, a canal: Panama";
    cout << "Input: \"" << s1 << "\"" << endl;
    bool result1 = solution.isPalindrome(s1);
    cout << "Output: " << (result1 ? "true" : "false") << endl;
    cout << "Expected: true" << endl;
    cout << "Explanation: \"amanaplanacanalpanama\" is a palindrome" << endl << endl;
    
    // Test case 2: Not a palindrome
    cout << "Test Case 2:" << endl;
    string s2 = "race a car";
    cout << "Input: \"" << s2 << "\"" << endl;
    bool result2 = solution.isPalindrome(s2);
    cout << "Output: " << (result2 ? "true" : "false") << endl;
    cout << "Expected: false" << endl;
    cout << "Explanation: \"raceacar\" is not a palindrome" << endl << endl;
    
    // Test case 3: Empty string
    cout << "Test Case 3:" << endl;
    string s3 = " ";
    cout << "Input: \"" << s3 << "\"" << endl;
    bool result3 = solution.isPalindrome(s3);
    cout << "Output: " << (result3 ? "true" : "false") << endl;
    cout << "Expected: true" << endl;
    cout << "Explanation: Empty string after removing non-alphanumeric is palindrome" << endl << endl;
    
    // Test case 4: Single character
    cout << "Test Case 4:" << endl;
    string s4 = "a";
    cout << "Input: \"" << s4 << "\"" << endl;
    bool result4 = solution.isPalindrome(s4);
    cout << "Output: " << (result4 ? "true" : "false") << endl;
    cout << "Expected: true" << endl;
    cout << "Explanation: Single character is always a palindrome" << endl << endl;
    
    // Test case 5: Numbers and letters
    cout << "Test Case 5:" << endl;
    string s5 = "Madam, I'm Adam";
    cout << "Input: \"" << s5 << "\"" << endl;
    bool result5 = solution.isPalindrome(s5);
    cout << "Output: " << (result5 ? "true" : "false") << endl;
    cout << "Expected: true" << endl;
    cout << "Explanation: \"madamimadam\" is a palindrome" << endl << endl;
    
    // Test case 6: Mixed with numbers
    cout << "Test Case 6:" << endl;
    string s6 = "A Santa at NASA";
    cout << "Input: \"" << s6 << "\"" << endl;
    bool result6 = solution.isPalindrome(s6);
    cout << "Output: " << (result6 ? "true" : "false") << endl;
    cout << "Expected: true" << endl;
    cout << "Explanation: \"asantaatnasa\" is a palindrome" << endl;
    
    return 0;
}