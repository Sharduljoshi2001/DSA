#include <stack>
#include <iostream>
using namespace std;
void explainStack()
{
    stack<int> s;
    s.emplace(0);
    s.emplace(1);
    s.emplace(2);
    s.emplace(3);
    stack<int> temp = s;
    // PRINTING STACK USING WHILE LOOP
    cout<<"Stack :"<<endl;
    while (!temp.empty())
    {
        cout << temp.top() << endl;
        temp.pop();
    }

    cout << endl;

    cout << "Size of Stack: " << s.size() << endl;
    s.pop();
    cout << "Top Element after pop operation: " << s.top() << endl;

    // SWAP in Stack

    stack<int>s2;
    s2.emplace(10);
    s2.emplace(20);
    s2.emplace(30);
    s2.emplace(40);

    cout<<"Stack s1's top element before swap: "<<s.top()<<endl;
    cout<<"Stack s2's top element before swap: "<<s2.top()<<endl;

    s.swap(s2);

    cout<<"Stack s1's top element after swap: "<<s.top()<<endl;
    cout<<"Stack s2's top element after swap: "<<s2.top()<<endl;

    // EMPTY Check(.empty())
    cout<<(s2.empty()?"Stack S2 is empty":"Stack S2 is not empty")<<endl;

}
int main()
{
    explainStack();
    return 0;
}