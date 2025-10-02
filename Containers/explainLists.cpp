#include <utility>
#include <iostream>
#include <list>
using namespace std;
void explainList()
{
    list<int> list1 = {10, 20, 30};
    list1.push_front(0);
    for (auto i : list1)
    {
        cout << i << endl;
    }

    cout << "Front Element: " << list1.front() << endl;
}

int main()
{
    explainList();
    return 0;
}