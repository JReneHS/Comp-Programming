#include <bits/stdc++.h>

using namespace std;

int main(){
    int tab[5][5];
    auto a = 0,b = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin>>tab[i][j];
            if(tab[i][j] == 1) {
                a = i;
                b = j;
            }
        } 
    }

    cout<<abs(a-2) + abs(b-2);
    return 0;
}


