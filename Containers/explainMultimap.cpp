#include <map>
#include <iostream>
using namespace std;
void explainMultimap()
{
    /*
    Multimap
        multimap bhi ek associative container hai jo key–value pairs store karta hai.

        Lekin map ke unlike, multimap ek hi key ke multiple values store kar sakta hai.

        Elements sorted order (by key) mein hi store hote hain (kyunki internally
        balanced BST hota hai).

        Use Case: Agar ek key ke multiple entries rakhni ho (duplicate keys allowed),
        to multimap use hota hai.

        🔹 Properties

        Sorted order (by key).

        Duplicate keys allowed.

        Search, Insert, Erase operations → O(logN).

        Internally implemented using Red-Black Tree.
    */

    multimap<int, string> mm;
    mm.insert({1, "One"});
    mm.insert({2, "Two"});
    mm.insert({2, "Second Two"});
    mm.insert({3, "Three"});
    cout << "Printing Multimap: ";
    for (auto it : mm)
    {
        cout << "Key: " << it.first << " Value: " << it.second << endl;
    }
    // Count how many values exist for key=2
    cout << endl;
    cout << "Count of key(2): " << mm.count(2) << endl;
    cout << endl;
    // Find first element of key=2
    auto it = mm.find(2);
    cout << "First value associated with key(2): " << (*it).second << endl
         << endl;

    /*
    equal_range(key)

        Ye function ek pair of iterators return karta hai:

        first iterator → key ke first occurrence ko point karta hai

        second iterator → key ke last occurrence ke just baad (exclusive) ko point
        karta hai

        Matlab ek tarah se ye range [first, second) return karta hai jo us key ke
        sare elements cover karta hai.
    */
    auto it1 = mm.equal_range(2);
    for (auto i = it1.first; i != it1.second; i++)
    {
        cout << "Key: " << (*i).first << " & Value: " << (*i).second << endl
             << endl;
    }
}
int main()
{
    explainMultimap();
    return 0;
}