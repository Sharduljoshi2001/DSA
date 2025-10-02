#include <set>
#include <iostream>
using namespace std;
void explainMultiSet()
{
    /*
        same as set data structure but unlike set it also stores repeating
        values as well
    */
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);
    ms.insert(4);
    // stores all the elements and stores them in ascending order
    for (auto it : ms)
    {
        cout << it << endl;
    }
    cout << endl
         << endl;

    // if we have to find an element {lets say 1(has multiple occurances)}
    // it will find the first occurance of the element
    auto it = ms.find(2);
    cout << *it << endl;
    cout << endl
         << endl;
    // if we have to erase an element{lets say 1(has multiple occurances)}
    // it will erase all the 1's that are present in the multiset
    // ms.erase(1);
    cout<<"After Erasing 1's: "<<endl;
    for (auto it : ms)
    {
        cout << it << endl;
    }
    cout << endl
         << endl;
    // if you want to delete only single 1, we can acheive it by
    ms.erase(ms.find(1));
        for (auto it : ms)
    {
        cout << it << endl;
    }

}
int main()
{
    explainMultiSet();
    return 0;
}