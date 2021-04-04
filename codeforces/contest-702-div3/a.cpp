#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

void rec(short mx, short mn, int &cases){
    if(float(mx)/float(mn) <= 2.0) return ;
    short nmx = mx/2 + mx%2;
    cases++;
    rec(nmx,mn,cases);
}

int main() { _io
    int t; cin>>t;
    short n;
    while(t--){
        int cases = 0;
        cin>>n;
        vector<short> a(n);
        for(auto &x : a)cin>>x;
        for(auto x=0; x<n-1; x++){
            rec(max(a[x],a[x+1]), min(a[x],a[x+1]), cases);
        }
        cout<<cases<<endl;
    }
    return 0;
}
