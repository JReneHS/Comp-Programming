//https://codeforces.com/contest/363/problem/B
//B. Fence
//GioKim
#include <bits/stdc++.h>

#define endl "\n"

#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
typedef long long int lli;
 
int main() { _io
    int n, k, kaux, min, delta1, delta2, pos; cin>>n>>k;
    delta1 = 0;
    kaux = k;
    pos = 0;
 
    vector<int> fence(n);
    for (auto &x : fence) {
        cin>>x;
        if(kaux > 0) {
            delta1 += x;
            kaux--;
        }
    }
    min = delta1;
    for (int i = 1; i <= n-k; i++) {
        delta2 = delta1 - fence[i-1] + fence[i+k-1];
        if(delta2 < min) {
            min = delta2;
            pos = i;
        }
        delta1 = delta2;
    }
    cout<<pos+1;
    return 0;
}
 
