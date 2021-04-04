#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;cin>>a;
    auto minimax = 0;
    auto tram = 0;
    while(a--) {
        int o,i;cin>>o>>i;
        tram +=i-o;
        if(tram > minimax) minimax = tram;
    }
    cout<<minimax<<endl;
    return 0;
}


