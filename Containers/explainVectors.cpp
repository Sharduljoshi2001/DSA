#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    vector<int> vector1;
    vector1.insert(vector1.begin(), 0);
    // vector<int> vector1(3,8);
    vector1.push_back(1);
    vector1.push_back(2);
    vector1.push_back(3);
    vector1.push_back(4);
    vector1.insert(vector1.end(), 5);
    // printing [1,2,3,4]
    for (int i = 0; i < vector1.size(); i++)
    {
        // cout << vector1[i] << endl;
    }

    // Iterator
    vector<int>::iterator beginItr = vector1.begin();
    cout << "First Element: " << *beginItr << endl;

    vector<int>::iterator endItr = vector1.end() - 1;
    cout << "Last Element: " << *endItr << endl;

    // for (auto i = beginItr; i <= endItr; i++)
    // {
    //     cout << "Value : " << *i << " , " << "Address : " << &(*i) << endl;
    // }
    // OR
    //  for (vector<int>::iterator i = beginItr; i <= endItr; i++)
    //  {
    //      cout << *i << " ";
    //  }
    //  cout << endl;
    // OR
    for (auto i : vector1)
    {
        cout << i << endl;
    }

    // Reverse Iterator
    auto reverseBegin = vector1.rbegin();
    auto reverseEnd = vector1.rend();
    for (auto i = reverseBegin; i < reverseEnd; i++)
    {
        // cout<<*i<<" ";
    }

    cout << "Front Element: " << vector1.front() << endl;
    cout << "Back Element: " << vector1.back() << endl;
}
int main()
{
    explainVector();
    return 0;
}
