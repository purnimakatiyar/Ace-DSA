//Maps->key value pairs, unique keys, uncontiguous memory allocation
//Maps -> stored in sorted order based on keys
//Maps are implemented as balanced binary search trees (usually red-black trees) in C++ STL
//Time complexity for insertion, deletion, and search is O(log n)
//In case if keys are strings, then they are sorted lexicographically
//keys are unique, if you insert a key that already exists, it will update the value associated with that key

//int string
// 1 abc
// 5 cde

//it++ works here ->

#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> m; //empty map of int and string
    m[1] = "abc"; //O(log n)
    m[5] = "cde"; //O(log n)
    m[3] = "xyz"; //O(log n)  
    m.insert({2, "def"}); //O(log n)
    m[6]; //insert key 6 with default value "" if not present, O(log n)

    map<string, string>m2;
    //we can also insert in map like this
    m2["abcd"]= "xyz"; // s.size() * O(log n)
    
    map<int, string>::iterator it; //iterator for map
    for (it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl; //dereferencing the iterator to get the key and value
    }

    for(auto &pr : m) { //range-based for loop
        cout<< pr.first << " " << pr.second << endl; //pr is a pair, pr.first is key and pr.second is value
    }

    auto it2 = m.find(3); //find returns an iterator to the element with key 3, O(log n)
    if (it2 != m.end()) {
        m.erase(it2); //erase the element with key 3, O(log n)
    }

    m.clear(); //clear the map, O(n)

    if (it2 != m.end()) {
        cout << "Found: " << it2->first << " " << it2->second << endl; //dereferencing the iterator to get the key and value
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
