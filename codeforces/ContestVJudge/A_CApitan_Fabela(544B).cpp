#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int n,i;cin>>n>>i;
    int spa;
    if((n&1) == 0){
        spa = n*n/2;
    } else {
        spa = (n*n/2)+1;
    }
    if(i > spa){cout<<"NO"<<endl;}
    else {
        cout<<"YES"<<endl;
        for(int s = 0;s<n;s++){
            for(int k = 0;k<n;k++){
                if((s&1)==0){
                    if((k&1) == 0 && i != 0){
                        cout<<"L";
                        i--;
                    } else {
                        cout<<"S";
                    }
                } else {
                    if((k&1) == 1 && i != 0){
                        cout<<"L";
                        i--;
                    } else {
                        cout<<"S";
                    }
                }
            }
            cout<<'\n';
        }
    }
    return 0;
}


