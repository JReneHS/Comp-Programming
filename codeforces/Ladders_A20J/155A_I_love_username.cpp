#include <bits/stdc++.h>

using namespace std;

int main(){
    int a; cin>>a;
    int minim; cin>>minim;
    auto maxim = minim;
    int tot = 0;
    a--;
    while(a--) {
        int s; cin>>s;
        if(s < minim) {minim = s; tot++;}
        if(s > maxim) {maxim = s; tot++;}
    }
    cout<<tot<<endl;
    return 0;
}


