#include <bits/stdc++.h>

using namespace std;

void simp(string &ss) {
    if(ss.length() <= 10) {
        cout<<ss<<endl;
    } else {
        cout<<ss[0]<<ss.length()-2<<ss[ss.length()-1]<<endl;
    }
}

int main() {
    int n;cin>>n;
    vector<string> words(n);
    for(auto &s:words)cin>>s;
    for(auto &s: words)simp(s);
    return 0;
}


