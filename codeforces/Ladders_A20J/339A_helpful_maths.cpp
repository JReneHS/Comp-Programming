#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    string sum; cin>>sum;
    for(unsigned int x = 0; x < sum.size(); x+=2){
        char ss = sum[x];
        switch(ss) {
            case '1':
                a++;
                break;
            case '2':
                b++;
                break;
            case '3':
                c++;
                break;
        }
    }
    while(a--) {
        if(a == 0) {
            cout<<"1";
            if(b>0||c>0)cout<<"+";
            break;
        }
        cout<<"1+";
    }
    while(b--) {
        if(b == 0) {
            cout<<"2";
            if(c>0)cout<<"+";
            break;
        }
        cout<<"2+";
    }
    while(c--) {
        if(c == 0) {cout<<"3";break;}
        cout<<"3+";
    }
    
    return 0;
}


