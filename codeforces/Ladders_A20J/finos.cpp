#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io

  int p = 2;
  vector<pair<int,int>> gemelos(5);

  for (auto &x : gemelos) {
    cin>>x.first>>x.second;
  }

  set<int> res;

  int fino = 30, it = 1;

  for (auto x : gemelos) {
    while (true) {
      fino = p*x.first*x.second*it;
      if(fino >= 2021) break;
      res.insert(fino);
      it++;
    }
    it = 1;
    fino = 30;
  }

  for (auto x : res) {
  cout<<x<<" ";
  }
  cout<<"\nEl Numero de Elementos es >> "<<res.size()<<endl;
  return 0;
}
