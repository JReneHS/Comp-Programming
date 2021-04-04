#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;cin>>num;
    auto s=0;
    while(num--){
        int a,b,c;cin>>a>>b>>c;
        if(a+b+c>1){
            s++;
        }
    }
    cout<<s<<endl;
    return 0;
}


