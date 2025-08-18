//.begin() -> v[0]
//.end() -> next to last element
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {1, 2, 3, 4, 5}; //vector of integers
    vector<int>::iterator it = v.begin(); //iterator pointing to the first element
    cout<< *it<<endl; //-> * uski value nikalte jaise pointers mei hota hai
    cout<<*(it + 1)<<endl;

    //print vector using iterator
    for(it = v.begin(); it!= v.end(); ++it){
        cout<<*it<<" "; //dereferencing the iterator to get the value
    }

    // it++, it+1 works in vectors but not in sets maps because they are not stored in contiguous memory
    //it++ -> increment the iterator to point to the next element
    //it+1 -> move to next memory address, it points to the next iterator value, but it is not recommended to use it+1 in STL containers

    //create a vector of pairs
    vector<pair<int, int>> v2 = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it2; //iterator for vector of pairs
    for(it2= v2.begin(); it2 != v2.end(); ++it2){
        cout<<(*it2).first<<" "<<(*it2).second<<endl; //dereferencing the iterator to get the value of pair
        cout<<it2->first<<" "<<it2->second<<endl; //using arrow operator to access pair elements
    }
    //(*it).first and (*it).second are equivalent to it->first and it->second

    //short vector declaration and access using iterators auto and range-based for loop-> C++11 onwards
    for(int val: v){ //value copies to val
        cout<<val<<" ";
    }
    for(int &val: v){ //reference to val, no copy
        cout<<val<<" ";
    }
    return 0;

    for(auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // using auto to deduce the type of iterator -> iterator declaration explicitly not needed
    }

    //Auto range-based for loop
    for(auto &val: v) {
        cout << val << " "; // using auto to deduce the type of reference
    }
}

