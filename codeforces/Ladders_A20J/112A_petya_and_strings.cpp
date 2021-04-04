#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1,s2;cin>>s1>>s2;
    bool token = true;
    for(unsigned int i=0;i<s1.size();i++){
        if(s1[i]<97){
            s1[i]+=32;
        }
        if(s2[i]<97){
            s2[i]+=32;
        }
        if(s1[i]==s2[i]){
            continue;
        }
        if(s1[i]>s2[i]){
            cout<<"1"<<endl;
            token = false;
            break;
        }else{
            cout<<"-1"<<endl;
            token = false;
            break;
        }
    }
    if(token)cout<<"0"<<endl;
    return 0;
}


