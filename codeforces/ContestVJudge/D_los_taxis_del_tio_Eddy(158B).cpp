#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    vector<int> g(6,0);
    while(n--){
        int s;cin>>s;
        g[s]++;
    }
    auto taxi = g[4];
    taxi += g[3];
    taxi += g[2]/2 + (g[2]&1);
    g[1] -= g[3];
    g[1] -= (g[2]&1) * 2;

    if(g[1] > 0){
        taxi += g[1]/4;
        if(g[1]%4 > 0)taxi++;
    }

    cout<<taxi<<endl;
    return 0;
}


