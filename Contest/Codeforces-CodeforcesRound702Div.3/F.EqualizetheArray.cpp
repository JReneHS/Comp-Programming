// time-limit: 2000
// problem-url: https://codeforces.com/contest/1490/problem/F
#include <bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define pb push_back

#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;


typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<lli> vlli;

const int MAXN = 2e5 + 57;
int a[MAXN];
map<int,int> rep;

void solve() {
  int len,num,qv;
  qv = 0;
  cin>>len;
  lli n = len;
  while(len--){
    cin>>num;
    rep[num]++;
  }
  for(auto i = rep.begin(); i != rep.end(); i++)
    a[++qv] = i->second;
  rep.clear();
  sort(a+1,a+qv+1);
  lli minn = MAXN;
  forr(i,1,qv)
    minn = min(n - (qv - i + 1)*a[i], minn);
  cout<<minn<<endl;
}

int main() { _io
  int cases; cin>>cases;
  while(cases--){
    solve();
  }
  return 0;
}
