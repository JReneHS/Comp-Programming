#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0,a = 0,b = 0,c = 0;
    cin>>n;
    while(n--) {
        int ax,bx,cx;
        cin>>ax>>bx>>cx;
        a += ax;
        b += bx;
        c += cx;
    }
    if(a == 0 && b == 0 && c == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
    return 0;
}


