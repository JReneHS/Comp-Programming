#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

void printIndex(vector<int> &v) {
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }
}

void printIterator(vector<int> &v) {
    for(auto it = v.begin(); it != v.end(); it++) {
        cout<<*it<<endl;
    }
}

void prntForAuto(vector<int> &v) {
    for(auto el: v) {
        cout<<el<<endl;
    }
}

int main() { _io
    vector<int> v;
    for(int i = 0; i<10; i++) {
        v.push_back(i);
    }
    printIndex(v);
    printIterator(v);
    prntForAuto(v);
    return 0;
}


