#include <bits/stdc++.h>
using namespace std;

int change(int& num) {
    if(num == 1) {return 0;}
    else {return 1;}
}

int main(){
    int li[3][3];
    int res[5][5];
    for(auto i = 0; i < 3; i++) {
        for(auto j = 0; j < 3 ; j++) {
            cin>>li[i][j];
            li[i][j] %= 2;
            res[i+1][j+1] = 1;
        }
    }
    for(auto i = 0; i < 3; i++) {
        for(auto j = 0; j < 3 ; j++) {
            if(li[i][j] == 1) {
                res[i][j+1] = change(res[i][j+1]);
                res[i+1][j] = change(res[i+1][j]);
                res[i+1][j+1] = change(res[i+1][j+1]);
                res[i+1][j+2] = change(res[i+1][j+2]);
                res[i+2][j+1] = change(res[i+2][j+1]);
            }
        }
    }
    for(auto i = 1; i < 4; i++) {
        for(auto j = 1; j < 4 ; j++) {
            cout<<res[i][j];
        }
        cout<<endl;
    }
    return 0;
}

