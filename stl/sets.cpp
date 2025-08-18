#include<bits/stdc++.h>
using namespace std;

//sets are used to store unique elements in sorted order
//sets are implemented as balanced binary search trees (usually red-black trees) in C++ STL
//Time complexity for insertion, deletion, and search is O(log n)
//elements are stored in sorted order based on their values
//if you try to insert a duplicate element, it will not be added
//sets are useful when you need to maintain a collection of unique elements and perform operations like union, intersection, and difference
//sets is basically a collection of keys, where each key is unique

void printSet(const set<int>& s) {
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    set<int> s; // empty set of integers
    s.insert(5); // O(log n)
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(4);    
    s.insert(5); // duplicate, will not be added
    s.insert(6);

    cout << "Set elements: ";
    printSet(s); // prints: 1 2 3 4 5 6

    //we can't access elements by index, but we can iterate through the set
    set<int>::iterator it = s.find(3); // find returns an iterator to the element with value 3, O(log n)
    if (it != s.end()) {
        cout << "Found: " << (*it) << endl; // dereferencing the iterator to get the value
    } else {
        cout << "Not found" << endl;
    }
    s.erase(it); // erase the element with value 3, O(log n) -> pass iterator to erase
    s.erase(2); // erase the element with value 2, O(log n) -> pass value to erase
    cout << "After erasing 3, set elements: ";
    printSet(s); // prints: 1 2 4 5 6    
    s.clear(); // clear the set, O(n)

    // Using range-based for loop to print elements
    cout << "Set elements using range-based for loop: ";
    for (const auto& elem : s) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}

//Question: Given N integers, find the unique strings in sorted order and print them

int main() {
    int n;
    cin >> n;
    set<string> s;
    //unordereed_set<string> s; // if you want to use unordered set instead

    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        s.insert(str); // insert unique strings
    }
    for(const auto& str : s) {
        cout << str << endl;
    }
}

//QUestion: Given N strings and q queries, in each query, find if the string is present in the set or not
int main() {
    int n, q;
    cin >> n >> q;
    unordered_set<string> s; // set to store unique strings
    for(int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        s.insert(str); // insert unique strings
    }
    for(int i = 0; i < q; ++i) {
        string str;
        cin >> str;
        if(s.find(str) != s.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

//Multiset is a type of set that allows multiple values for the same key
//it is implemented as a balanced binary search tree, so it has O(log n) time complexity for insertion, deletion and search
//it is used when we need to store multiple values for the same key
//it is sorted, so we can use it for ordered data
//multiset<int> ms;
// s.insert(5); // O(log n)
// s.insert(1);
// s.insert(4);    
// s.insert(5); // duplicate, will be added
// find operator will return an iterator to the first occurrence of the element
// s.erase(it); // erase the first occurrence of the element, O(log n)
// s.erase(2); // erase all occurrences of the element, O(log n)
// s.clear(); // clear the multiset, O(n)
