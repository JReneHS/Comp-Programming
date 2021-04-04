#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,m;cin>>n>>m;
    auto i = 0;
    auto res = 1;
    auto flag = n;
    vector<int> cola(n);
    vector<bool> stayQ(n,true);
    for(auto &x:cola)cin>>x;
    while(flag != 0){
        if(stayQ[i]){
            cola[i] -= m;
            if(cola[i] <= 0){
                stayQ[i] = false;
                res = i+1;
                flag--;
            }
        }
        i++;
        if(i == n)i = 0;
    }
    cout<<res<<endl;
    return 0;
}


