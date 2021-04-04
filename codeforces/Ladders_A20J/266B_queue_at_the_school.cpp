#include <bits/stdc++.h>

using namespace std;

int main(){
    auto n = 0, t = 0;
    cin>>n>>t;
    string ch;
    string chF;
    cin>>ch;
    chF = ch;
    while(t--) {
        for(auto j = 1; j < n; j++) {
            if(ch[j] == 'G' && ch[j-1] == 'B') {
                chF[j] = 'B';
                chF[j-1] = 'G';
            }
        }
    ch = chF;
    }
    cout<<ch;
    return 0;
}

