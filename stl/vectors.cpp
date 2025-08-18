#include<bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    cout<<"size:"<<v.size()<<endl;
    for(int i = 0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int> v;
    int n;
    cin>>n;

    for(int i = 0; i<n; ++i){
        int x;
        cin>>x;
        printVector(v);
        v.push_back(x); //O(1)
    }
    printVector(v);
}

// vector<int> v(5, 10); //size 5, all elements initialized to 10
//to give size of vector
// vector<int> v(5); //size 5, all elements initialized to 0

// int main(){
//     int a[10];
//     vector<int> v;
//     vector<pair<int, int>> v2;
// }

//copy vector
// vector<int> v2 = v; //copy constructo- agar v2 mei change krege to v mei koi change nhi hoga - O(n)
// vector<int> v2(v); //copy constructor
// vector<int> v2(v.begin(), v.end()); //copy constructor
// vector<int> v2(v.size()); //default constructor, size 5, all elements initialized to 0

// vector<int> v2(v.begin(), v.begin() + 5); //copy constructor, first 5 elements
// vector<int> v2(v.begin() + 5, v.end()); //copy constructor, last 5 elements
// vector<int> v2(v.begin() + 5, v.begin() + 10); //copy constructor, elements from index 5 to 9

//reference vector
// vector<int> &v2 = v; //reference, agar v2 mei change krege to v mei bhi change hoga


//string vector
// vector<string> v2; //empty vector of strings
// v2.push_back("hello"); //O(1)
// v2.push_back("world"); //O(1)
// cout<<v2[0]<<" "<<v2[1]<<endl; //hello world

int main(){
    vector<string> v2; //empty vector of strings

    int n;
    cin >> n;
    for(int i = 0; i<n; ++i){
        string s;
        cin >> s;
        v2.push_back(s); //O(1)
    }
}


//vector of pairs
// vector<pair<int, int>> v2; //empty vector of pairs -> {{1, 2}, {3, 4}, {5, 6}}

void printVectorOfPairs(vector<pair<int, int>> &v) {
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main() {
    vector<pair<int, int>> v2 = {{1, 2}, {3, 4}, {5, 6}}; //empty vector of pairs
    printVectorOfPairs(v2);
}

//vector of vectors

int main() {
    int N;
    cin >> N;
    vector<int> v[N]; //vector of vectors, size N, each vector is empty
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n; //size of each vector
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x; //input elements of each vector
            v[i].push_back(x); //O(1)
        }
    }
}

//another way to create a vector of vectors
int main() {
    int N;
    cin >> N;
    vector<vector<int>> v; //vector of vectors, size N, each vector is empty
    for (int i = 0; i < N; ++i) {
        int n;
        cin >> n; //size of each vector
        vector<int> temp; //create a new vector
        for (int j = 0; j < n; ++j) {
            int x;
            cin >> x; //input elements of each vector
            temp.push_back(x); //O(1)
        }
        v.push_back(temp); //O(1)
    }
    for (int i = 0; i < v.size(); ++i) {
        printVector(v[i]); //print each vector
    }
    cout<<v[0][1];
}
