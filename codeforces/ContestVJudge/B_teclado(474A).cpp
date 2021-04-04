#include <bits/stdc++.h>

using namespace std;

string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";

int buscar(char s){
    unsigned int i = 0;
    for(i = 0; i< ss.size();i++){
        if(s == ss[i])return i;
    }
    return -1;
}

int main() {
    char desp;cin>>desp;
    string ingreso;cin>>ingreso;
    if(desp == 'R'){
        for(unsigned int i = 0;i<ingreso.size();i++){
            int s = buscar(ingreso[i]);
            cout<<ss[s-1];
        }
    } else {
        for(unsigned int i = 0;i<ingreso.size();i++){
            int s = buscar(ingreso[i]);
            cout<<ss[s+1];
        }
    }
    return 0;
}


