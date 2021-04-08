// time-limit: 1000
// problem-url: https://codeforces.com/contest/1355/problem/C
#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int ll;

ll f(ll m,ll n){
    if(n<=0)
      return 0;
    if(m<=0)
      return (n*(n+1))/2;
    return (n*(n+1))/2-(m*(m+1))/2+m;
}
void solve(){
    ll a,b,c,d; cin>>a>>b>>c>>d;
    ll ans=0;
    for(ll z=c;z<=d;z++){
        ll x;
        x=z-b+1;
        if(x<=a){
            ans+=(b-a+1)*(c-b+1);
        }
        else if(x<=b){
            ans+=(b-x+1)*(c-b+1);
            ans+=f(c-b-x+a+1,c-b);
        }
        else{
            ans+=f(c-z+a,c-z+b);
        }
    }
    cout<<ans<<endl;
}
 
int main(){ _io
    ll t;
    t=1;
    while(t--) solve();
} 
