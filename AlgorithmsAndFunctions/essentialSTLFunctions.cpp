#include <algorithm>
#include <iostream>
#include <numeric>
#include <utility>
using namespace std;
void explainSort()
{
    int arr[] = {6, 2, 1, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    sort(arr + 1, arr + 4);
    cout << "After Sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "IN VECTORS." << endl;
    // We can also perform this on a vector as well

    vector<int>
        v = {5, 4, 3, 2, 1};
    cout << "Before Sorting:" << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }
    cout << endl;
    sort(v.begin(), v.end());
    cout << "After Sorting:" << endl;
    for (auto it : v)
    {
        cout << it << endl;
    }
}

void explainAccumulate()
{
    /*
    Accumulate
        Ye function (<numeric> header ka part) basically ek range ke elements ko ek
        single value mein combine karta hai.
        By default ye add ( + ) use karta hai, lekin tum chaho toh multiplication,
        string concat ya apna custom operation bhi de sakte ho.
    🔹 Syntax
        accumulate(startIterator, endIterator, initialValue);
        accumulate(startIterator, endIterator, initialValue, operation);
    */
    int arr[] = {6, 2, 1, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arrSum = accumulate(arr, arr + size, 0);
    cout << "Sum using Accumulate function : " << arrSum << endl
         << endl;
    int arrMultiply = accumulate(arr, arr + size, 1, multiplies<int>());
    cout << "Multiplication using Accumulate function: " << arrMultiply << endl;
}

void explainCount()
{
    /*
    Count
        count ek STL algorithm hai jo range me kisi element ki occurrences batata hai.

        🔹 Syntax
        count(startIterator, endIterator, value);
    */
    int arr[] = {6, 2, 1, 7, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    cout << "Total Occurance of " << num << " is : " << count(arr, arr + size, num) << endl;
}

void explainFind()
{
    /*
    Find
        find ek function hai jo container me value dhoondta hai.

        Agar value mil jaaye to uska address/iterator return karta hai.

        Agar value nahi milti, to end() iterator return karta hai.

        Iterator ka use karke hum value ka index ya element access kar sakte hain.
    */
    int arr[] = {6, 2, 1, 7, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    auto it = find(arr, arr + size, 7);
    if (it == (arr + 5))
    {
        cout << "End of array." << endl;
    }
    else
    {
        cout << (*it) << endl;
    }
    cout << endl;
    cout << "IN VECTORS." << endl;
    vector<int> v = {0, 1, 1, 1, 2, 3, 4, 5, 5, 6};
    auto it1 = find(v.begin(), v.end(), 5);
    if (it1 == v.end())
    {
        cout << "End of Vector." << endl;
    }
    else
    {
        cout << *it1 << endl;
    }
}

void explainNextPermutation()
{
    /*
    next_permutation
        next_permutation is a function that changes a sequence (like an array or
        vector) to the next bigger order.

        Think of it like finding the next number if the digits were rearranged in
        ascending order.

        If the sequence is already the biggest possible order, it will wrap around
        to the smallest order (sorted in increasing order).

        It returns true if it successfully made a next bigger sequence, false if it
        had to wrap around.
    */
    string str = "cba";
    int i = 1;
    do
    {
        cout << i << " - " << str << endl;
        i++;
    } while (next_permutation(str.begin(), str.end()));
}

void explainMaxAndMinElement()
{
    int arr[] = {6, 2, 1, 7, 7, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    auto it = max_element(arr, arr + size);

    cout << "Max Element : " << (*it) << endl;
    cout << endl;

    auto it1 = min_element(arr, arr + size);

    cout << "Min Element : " << (*it1) << endl;
    cout << endl;
}

void explaiReverse()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Reverse:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    reverse(arr, arr + size);
    cout << "After Reverse:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void explainPow()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Squaring : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    cout << "After Squaring : " << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = pow(arr[i], 2);
        cout << arr[i] << endl;
    }
}

// Comparator function below
bool compare(pair<int, int> el1, pair<int, int> el2)
{
    if (el1.second > el2.second)
        return true;
    if (el1.second < el2.second)
        return false;
    if (el1.first < el2.first)
        return true;
    return false;
}

void explainComparator()
{
    /*
        A comparator is a custom function or functor that decides how to compare
        two elements when sorting or ordering in containers like sort(), set, map,
        or priority_queue.

        return x > y;  // Descending order (5,4,3,2,1)
        return x < y;  // Ascending order (1,2,3,4,5) - same as default
    */
    int arr[] = {1, 3, 2, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    // sort(arr, arr + size, compare);

    // cout << "After sorting (descending):" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // Array of pairs
    pair<int, int> pairArr[] = {{1, 6},
                                {1, 5},
                                {2, 6},
                                {2, 9},
                                {3, 9}};

    int pairSize = sizeof(pairArr) / sizeof(pairArr[0]);

    cout << "Before sorting pairs:" << endl;
    for (int i = 0; i < pairSize; i++)
    {
        cout << "{" << pairArr[i].first << ", " << pairArr[i].second << "} ";
    }
    cout << endl;
    // sort it according to the second element
    //{2,9} {3,9} {1,6} {2,6} {1,5}
    sort(pairArr, pairArr + pairSize, compare);

    cout << "After sorting pairs:" << endl;
    for (int i = 0; i < pairSize; i++)
    {
        cout << "{" << pairArr[i].first << ", " << pairArr[i].second << "} ";
    }
    cout << endl;
}

int main()
{
    // explainSort();
    // explainAccumulate();
    // explainCount();
    // explainFind();
    // explainNextPermutation();
    // explainMaxAndMinElement();
    // explaiReverse();
    // explainPow();
    explainComparator();
}