#include <bits/stdc++.h>

using namespace std;

int main() {
    string ss;cin>>ss;
    string lang{'H','Q','9'};
    bool nup = true;
    for(auto x:ss) {
        if(x==lang[0]||x==lang[1]||x==lang[2]){
            cout<<"YES"<<endl;
            nup = false;
            break;
        }
    }
    if(nup)cout<<"NO"<<endl;
    return 0;
}


