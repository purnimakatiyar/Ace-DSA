/*
Given N strings, print unique strings in lexographically order with their frequencies.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        vector<vector<int>> ans;
        map<int,int> m; // frequency map
        set<pair<int,int>> s; // {-freq, num}

        for(int i = 0; i < N; ++i) {
            if(m[arr[i]] > 0) 
                s.erase({-m[arr[i]], arr[i]}); // remove old frequency

            m[arr[i]]++; // update frequency
            s.insert({-m[arr[i]], arr[i]}); // insert new frequency

            vector<int> v;
            int p = K;
            for(auto it : s) {
                if(p == 0) break;
                v.push_back(it.second);
                p--;
            }
            ans.push_back(v);
        }

        return ans;
    }
};

