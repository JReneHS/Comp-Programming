#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io
    int cases;
    lli fil,col,n,m,x,ans;
    cin>>cases;

    while(cases--){
      cin>>n>>m>>x;
      x -= 1;
      col = x/n + 1;
      fil = x%n + 1;
      ans = (fil-1)*m + col;
      cout<<ans<<endl;
    }
    return 0;
}
