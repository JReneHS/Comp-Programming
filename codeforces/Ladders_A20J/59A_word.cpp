#include <bits/stdc++.h>

using namespace std;

int main(){
    string cad; cin>>cad;
    int u = 0, l = 0;
    for(unsigned int i = 0; i < cad.length(); i++ ) {
        if(cad[i] >= 'A' && cad[i] <= 'Z') {
            u++;
        } else l++;
    }
    if(l >= u) {
        for(unsigned int i = 0; i < cad.length(); i++ ) {
            cad[i]= tolower(cad[i]);
        }
    } else {
        for(unsigned int i = 0; i < cad.length(); i++ ) {
            cad[i]= toupper(cad[i]);
        }
    }
    cout<<cad<<endl;
    return 0;
}


