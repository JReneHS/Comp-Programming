#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b; cin>>a>>b;
    vector<int> bits;
    for(unsigned int x = 0; x < a.length(); x++) {
        int ab = a[x]-48;
        int bb = b[x]-48;
        if( ab ^ bb ) {
            bits.push_back(1);
        } else {
            bits.push_back(0);
        }
    }
    for(auto x : bits) {
        cout<<x;
    }
    return 0;
}


