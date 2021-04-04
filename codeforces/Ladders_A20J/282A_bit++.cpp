#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    auto x = 0;
    while(n--){
        string s;cin>>s;
        if(s=="++X"||s=="X++")x++;
        if(s=="--X"||s=="X--")x--;
    }
    cout<<x<<endl;
    return 0;
}


