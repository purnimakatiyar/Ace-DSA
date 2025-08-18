#include<bits/stdc++.h>
using namespace std;

int main() {
    // inbuilt implementation is different from the ordered map -> use hash table inbuilt, harr ek key ka hash value calulate krte h
    //Time complexity
    //valid keys datatype
    //incase if we try to put complex keys, we need to provide a hash function
    //We should use unordered_map when we don't need to maintain the order of keys
    //O(1) for insertion, deletion and search
    //O(N) for iteration
    unordered_map<int, string> m;
    m[1]="abc"; // O(1)
    m[5]="cde";
    m[3]="acd";
    m[6]="a";

    auto it = m.find(5);//O(1)
    if(it!= m.end()) {
       m.erase(it); // O(1)
    }

}

//Question: Given N strings, and q queries, find the frequency of each string in O(1) time for each query

int main() {
    int n, q;
    cin >> n >> q;
    unordered_map<string, int> m; // frequency map
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;   
        m[s]++; // increment frequency
    }
    for(int i = 0; i < q; ++i) {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}

//multimap is a type of unordered_map that allows multiple values for the same key
//it is implemented as a hash table, so it has O(1) time complexity for insertion, deletion and search
//it is used when we need to store multiple values for the same key
//it is not sorted, so we cannot use it for ordered data
// multimap<int, string> m;
