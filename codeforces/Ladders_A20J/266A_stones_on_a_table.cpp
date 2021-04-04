#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    string stones;
    cin>>num>>stones;
    int fir = 0;
    int t = 0;
    int i = 0;
    if(num == 1){
        cout<<0<<endl;
        return 0;
    } else {
        while(t<num){
            i = t+1;
            while(i<num) {
                if(stones[t] == stones[i]) {
                    fir++;
                    i++;
                } else {
                    break;
                }
            }
            t = i;
            if(fir == num-1) {
                cout<<fir<<endl;
                return 0;
            }
        }
    }
    cout<<fir<<endl;
    return 0;
}


