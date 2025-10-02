#include <queue>
#include <iostream>
using namespace std;
/*
In C++ Standard Template Library (STL), the queue is a versatile
container adapter that operates on a First In, First Out (FIFO)
basis. It facilitates efficient data handling by allowing elements
to be inserted at one end and removed from the other making it
particularly useful for managing tasks and scheduling operations
in a sequential manner.
*/
void explainQueue()
{
    queue<int> q1;

    /*
       1. Push / Emplace
           The push operation adds an element to the end of the queue.
           The emplace operation constructs the element in place, similar to
           push, but more efficient.
   */
    q1.emplace(10);
    q1.emplace(20);
    /*
        2. Front
            The front operation returns the element at the front of the queue without
            removing it.
    */
    cout << "The front element in the queue is: " << q1.front() << endl;
    /*
        3. Pop
            The pop operation removes the front element from the queue.
    */
    q1.pop();
    cout << "front Element after Pop: " << q1.front() << endl;
    /*
        4. Size
            The size operation returns the number of elements in the queue.
    */
    cout << "Number of elements in the queue: " << q1.size() << endl;
    /*
        5. Swap
            The swap operation swaps the contents of two queues.
    */
    queue<int> q2;
    q2.emplace(1);
    q2.emplace(2);
    cout << "Q1 before swap: " << endl;
    queue<int> temp = q1;
    while (!temp.empty())
    {
        cout << temp.front() << endl;
        temp.pop();
    }
    cout << "Q2 before swap: " << endl;
    temp = q2;
    while (!temp.empty())
    {
        cout << temp.front() << endl;
        temp.pop();
    }

    // Swapping below
    q1.swap(q2);
    cout << "Q1 after swap: " << endl;
    temp = q1;
    while (!temp.empty())
    {
        cout << temp.front() << endl;
        temp.pop();
    }
    cout << "Q2 after swap: " << endl;
    temp = q2;
    while (!temp.empty())
    {
        cout << temp.front() << endl;
        temp.pop();
    }
    /*
        6. Empty
            The empty operation checks if the queue is empty. It returns true if the
            queue is empty, otherwise false.
    */
    cout << "Is queue Q1 empty? " << (q1.empty() ? "Yes, it is" : "No, it is not") << endl;
}
void explainPriorityQueue()
{
    /*
        A priority queue is a data structure where each element has
        a priority. Unlike a standard queue (FIFO), elements are
        processed based on importance, not arrival order
        (for eg:stores the highest element at the top).
    */
    priority_queue<int> pq;
    // To print it in a decreasing order uncomment the line below and comment out the line above
    // priority_queue<int, vector<int>,greater<int>>pq;
    pq.emplace(0);
    pq.emplace(1);
    pq.emplace(2);
    pq.emplace(3);

    cout<<"Highest element in the Priority Queue: "<<pq.top()<<endl;
    // Printing all the elements:
    while(pq.empty()==false){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    

}
int main()
{
    // explainQueue();
    explainPriorityQueue();
    return 0;
}