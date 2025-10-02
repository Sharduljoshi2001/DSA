#include <iostream>
#include <vector>
#include <utility> // for pair
#include <map>     // for map
#include <string>  // for string
using namespace std;

void explainPairs()
{

    pair<int, int> pair1 = {2, 3};
    cout << pair1.first << " , " << pair1.second << endl;
    pair<int, char> pair2 = make_pair(2, 'S');
    cout << pair2.first << " ' " << pair2.second << endl;
    pair<pair<int, char>, int> pair3 = {{7, 'S'}, 8};
    cout << pair3.first.first << " , " << pair3.first.second << " , " << pair3.second << endl;
}

int main()
{
    // cout << "Program is running!" << endl;
    explainPairs();
    return 0;
}
