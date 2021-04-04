#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io
    int t, n, m;
    cin>>t;
    while(t--){
        auto fsum = 0;
        auto sum = 0;
        cin>>n>>m;
        vector<int> arr(n);
        vector<int> qstns(m);
        vector<int> ans(m,-1);
        for(auto &x : arr){
            cin>>x;
            fsum += x;
        }
        for(auto &x : qstns)cin>>x;
        if(fsum <= 0)
            for(auto &x : ans)cout<<x<<" ";
        else{
            
        }
    }
    return 0;
}


