#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io
    unsigned int casos, n, k, s, ans; cin>>casos;
    auto cont = 1;
    while(casos--){
        cin>>n>>k>>s;
        ans = min(2*(k-s)+n,n+k);
        cout<<"Case #"<<cont<<": "<<ans<<endl;
        cont++;
    }
    return 0;
}

