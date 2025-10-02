#include <map>
#include <unordered_map>
#include <iostream>
using namespace std;
void explainMap()
{
    /*
    map ek associative container hai jo key-value pairs store karta hai.

    Har element do parts me hota hai: key aur value.

    Keys unique hoti hain (duplicate keys allowed nahi hoti).

    Internally, map is usually implemented as a balanced binary search tree
    (Red-Black Tree), isliye elements sorted order me store hote hain (by key).
    */
    map<int, string> mp;
    mp[1] = "Rob";
    mp[2] = "Om";
    mp.insert({3, "Guy"});
    for (auto it : mp)
    {
        cout << "Roll No: " << it.first << " Name: " << it.second << endl;
    }

    // find(key) → iterator return karta hai us key par (agar mila to), else end()
    auto it = mp.find(3);
    cout << "R.No: " << (*it).first << " Name: " << (*it).second << endl;

    // if i find the key-value pair that isn't present
    auto it2 = mp.find(4);
    if (it2 == mp.end()) // Fixed: using it2 instead of it
    {
        cout << "Key 4 not found!" << endl;
    }
    /*
    lower_bound(key)

        Ye function ek iterator return karta hai jo uss key ke barabar ya usse
        badi wali first key pe point karega.

        Agar aisi koi key exist nahi karti (sab chhoti hain), to end() return
        karega.
    */
    auto it3 = mp.lower_bound(1);
    cout << "Lowerbound key: " << (*it3).first << " & it's value: " << (*it3).second << endl;
    /*
    upper_bound(key)

        Ye function ek iterator return karta hai jo uss key se strictly
        badi wali first key pe point karega.

        Agar aisi koi key exist nahi karti (sab chhoti hain), to end() return
        karega.
    */
    auto it4 = mp.upper_bound(1);
    cout << "Upperbound key: " << (*it4).first << " & it's value: " << (*it4).second << endl;
}

void explainUnorderedMap()
{
    /*
    Unordered_map
        Ye ek associative container hai jo key–value pairs store karta hai.

        map ke andar elements sorted order (ascending key) mein store hote hain.

        unordered_map ke andar elements unsorted (random order) mein store hote hain kyunki 
        ye internally hashing use karta hai.

        Matlab: unordered_map ka focus fast access hai, order maintain karna nahi.

        Properties

        Unique Keys → har key ek hi baar aati hai.

        Average O(1) operations → insertion, deletion, search. (map mein O(logN) hota hai).

        No order → elements kis order mein print honge, ye guaranteed nahi hai.
    */
   unordered_map<int,string>ump;
    ump[1] = "Rob";
    ump[2] = "Om";
    ump.emplace(3, "Guy");
    ump.insert({4,"bob"});
    cout<<"Printing Map: "<<endl;
    //Neche Printed Elements ka Order random hai (not sorted).
    for(auto it:ump){
        cout<<"Roll No: "<<it.first <<" Name: "<<it.second<<endl;
    }


}

int main()
{
    explainMap();
    explainUnorderedMap();
    return 0;
}