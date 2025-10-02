#include <set>
#include <iostream>
using namespace std;
void explainSet()
{
    /*
    Set Container
        The `set` container in C++ stores unique elements in a sorted manner.
        It automatically removes duplicate entries and provides efficient
        search operations.
    */
    set<int> set1;
    /*
    Insert / Emplace
        Elements can be added to a set using two methods: insert and
        emplace. The insert function adds a new element if it's not
        already present, returning a pair indicating success and an
        iterator. The emplace function constructs the element in
        place, potentially improving efficiency by avoiding
        unnecessary copies or moves.
    */
    set1.insert(10);
    set1.emplace(20);
    set1.emplace(30);
    set1.emplace(40);
    set1.emplace(50);
    set1.emplace(400);
    set1.emplace(500);
    set1.emplace(401);

    for (auto it : set1)
    {
        cout << it << endl; // Duplicates are removed
    }
    /*
    Find
        The find function searches for a specified element within the set.
        It returns an iterator pointing to the element if found, or to the end() of the set if
        the element is not present. This allows for efficient lookups and can be used in
        combination with other operations to check for the existence of an element or to perform
        actions on it.
    */
    // Method 1: Ternary with separate declaration
    auto it = set1.find(10);

    // (it != set1.end()) ? cout << *it << endl : cout << "Element not found" << endl;
    cout << (it != set1.end() ? "Element Present" : "Element not in the set") << endl;

    // Method 2: Using count() with ternary (cleaner)
    cout << (set1.count(10) ? "Element 10 found" : "Element 10 not found") << endl;
    cout << endl
         << endl;
    /*
    Erase in set → removes elements in two ways:

        By value → deletes that value if it exists.

        By iterator → deletes the element at that position.

        👉 Always removes only one copy, but in multiset it can remove multiple.
    */
    // auto it1 = set1.begin();
    // it1++;

    // auto it2 = set1.end();
    // it2--;
    // it2--;
    set1.erase(401);

    for (auto it : set1)
    {
        cout << it << endl;
    }

    /*
    Lower Bound
        returns an iterator that points to the first element that is > or == the given value
    */
    auto it3 = set1.lower_bound(21);
    cout << "LowerBound Value: " << *it3 << endl;

    /*
    Upper Bound
         return an iterator that points to the first element that is > the given value
    */
    auto it4 = set1.upper_bound(501);
    if (it4 == set1.end())
    {
        cout << "end" << endl;
    }
    else
    {
        cout << "UpperrBound Value: " << *it4 << endl;
    }
}
int main()
{
    explainSet();
    return 0;
}