#include <bits/stdc++.h>

using namespace std;

int main(){
    int year; cin>>year;
    int res = year + 1;
    while(true){
        string comp = to_string(res);
        if(comp[0] != comp[1] && comp[0] != comp[2] && comp[0] != comp[3] && comp[0] != comp[4]){
            if(comp[1] != comp[2] && comp[1] != comp[3] && comp[1] != comp[4]){
                if(comp[2] != comp[3] && comp[2] != comp[4]){
                    if(comp[3] != comp[4]){
                        break;
                    }
                }
            }
        }
        res++;
    }
    cout<<res;
    return 0;
}


