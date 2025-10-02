#include <iostream>
#include <deque>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <utility>
using namespace std;
void explainDeque()
{
    // DEQUE = Double Ended Queue
    // Can insert/delete from both front and back efficiently

    deque<int> dq;

    // Adding elements
    dq.push_back(10); // Add to back: [10]
    dq.push_back(20); // Add to back: [10, 20]
    dq.push_front(5); // Add to front: [5, 10, 20]
    dq.push_front(1); // Add to front: [1, 5, 10, 20]

    cout << "Deque contents: ";
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    // Accessing elements
    cout << "Front element: " << dq.front() << endl; // 1
    cout << "Back element: " << dq.back() << endl;   // 20
    cout << "Element at index 2: " << dq[2] << endl; // 10

    // Removing elements
    dq.pop_front(); // Remove from front: [5, 10, 20]
    dq.pop_back();  // Remove from back: [5, 10]

    cout << "After removals: ";
    for (int x : dq)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << "Size: " << dq.size() << endl;
}

// // Exercise 1: Implement a sliding window maximum
// void slidingWindowMax() {
//     cout << "\n--- Exercise 1: Sliding Window Maximum ---" << endl;
//     vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
//     int k = 3;  // window size

//     deque<int> dq;  // stores indices
//     cout << "Array: ";
//     for(int x : arr) cout << x << " ";
//     cout << "\nWindow size: " << k << endl;
//     cout << "Maximum in each window: ";

//     for(int i = 0; i < arr.size(); i++) {
//         // Remove elements outside current window
//         while(!dq.empty() && dq.front() <= i - k) {
//             dq.pop_front();
//         }

//         // Remove smaller elements from back
//         while(!dq.empty() && arr[dq.back()] <= arr[i]) {
//             dq.pop_back();
//         }

//         dq.push_back(i);

//         // Print maximum for current window
//         if(i >= k - 1) {
//             cout << arr[dq.front()] << " ";
//         }
//     }
//     cout << endl;
// }

// Exercise 2: Check if string is palindrome using deque
void palindromeCheck()
{
    cout << "\n--- Exercise 2: Palindrome Check ---" << endl;
    string str = "racecar";
    deque<char> dq;

    // Add all characters to deque
    for (char c : str)
    {
        dq.push_back(c);
    }

    cout << "Checking if '" << str << "' is palindrome..." << endl;

    bool isPalindrome = true;
    while (dq.size() > 1)
    {
        if (dq.front() != dq.back())
        {
            isPalindrome = false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }

    cout << "Result: " << (isPalindrome ? "Yes, it's a palindrome!" : "No, not a palindrome.") << endl;
}

int main()
{
    explainDeque();
    // slidingWindowMax();
    palindromeCheck();
    return 0;
}
