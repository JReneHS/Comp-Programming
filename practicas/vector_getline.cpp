#include <bits/stdc++.h>

using namespace std;

int main(){

    auto buffer = string {};
    auto list = vector<int> {};

    while ( getline ( cin , buffer )) {
        auto bufferStream = istringstream { move(buffer) };
        
        auto num = int {};
        
        while ( bufferStream >> num ) list.push_back(num);
    }
    for(auto x : list) {
        cout<<x<<endl;
    }
    return 0;
}


