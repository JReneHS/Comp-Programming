#include <bits/stdc++.h>

using namespace std;

int main(){
    string num; cin>>num;
    string near;
    unsigned int nearly = 0;
    for(auto x : num) {
        if(x == '4' || x == '7') {
            nearly++;
        }
    }
    near = to_string(nearly);
    for(auto x : near) {
        if(!(x == '4' || x == '7')) {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}


