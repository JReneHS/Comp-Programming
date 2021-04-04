#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';

using namespace std;

int bac;

int rBacteria(int x){
    if(x == 1) return 1;
    auto p = 0;
    auto bb = 1;
    while(pow(2,p) < x)p++;
    if(x == pow(2,p)) return 1;
    p--;
    bb += rBacteria(x - pow(2,p));
    return bb;
}

int main() { _
    int x;cin>>x;
    bac = rBacteria(x);
    cout<<bac<<endl;
    return 0;
}

