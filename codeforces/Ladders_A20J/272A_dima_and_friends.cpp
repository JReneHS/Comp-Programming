#include <bits/stdc++.h>

using namespace std;

int main() {
    int friends;cin>>friends;
    auto fingers = 0;
    auto dima = 0;
    for(auto i = 0; i < friends; i++){
        int a;cin>>a;
        fingers+=a;
    }
    for(auto i = 1; i<=5;i++){
        if((fingers+i)%(friends+1) != 1)dima++;
    }
    cout<<dima<<endl;
    return 0;
}


