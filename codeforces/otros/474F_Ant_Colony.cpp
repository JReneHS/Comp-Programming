#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

vector<lli> st;
vector<map<int,int>> st2;
int n;

void update(int idx, int value, int v = 1, int l = 0, int r = n-1) {
  if(l == r)
    st[v] = value;
  else {
    int m = (l+r)>>1;
    if(idx <= m)
      update(idx,value,v<<1,l,m);
    else
      update(idx,value,v<<1|1,m+1,r);
    st[v] = __gcd(st[v<<1],st[v<<1|1]);
  }
}

int query(int l, int r, int v = 1, int sl = 0, int sr = n-1) {
  
}

int main() { _io
    int ants, cases, l, r;
    cin>>ants;
    vector<int> force(ants);
    for (auto &x : force) 
      cin>>x;

    cin>>nc;
    vector<pair<int,int>> cases(nc);
    
    for (auto &x : cases)
      cin>>x.first>>x.second;

    return 0;
}
