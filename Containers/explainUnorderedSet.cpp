#include <unordered_set>
#include <iostream>
using namespace std;

void explainUnorderedSet(){
    /*
        stores unique elements in unordered manner(unlike sets)
    */
    unordered_set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(5);
    st.insert(4);
    cout<<"Printing Unordered Set: "<<endl;
    for(auto it:st){
        cout<<it<<endl;
    }
}
int main()
{
    explainUnorderedSet();
    return 0;
}