#include <bits/stdc++.h>

using namespace std;

int main() {
    string ss;cin>>ss;
    auto lenS = ss.size();
    vector<bool> repes(lenS,true);
    for(unsigned int x = 0; x < ss.size(); x++){
        if(!repes[x]) continue;
        for(unsigned int y = x+1; y < ss.size();y++){
           if(ss[x] == ss[y] && repes[y]){
                lenS--;
                repes[y] = false;
           } 
        }
    }
    if(lenS % 2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}


