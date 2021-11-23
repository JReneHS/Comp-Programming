// time-limit: 1000
// problem-url: https://codeforces.com/problemset/problem/381/A
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
     
typedef long long int ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<ll> vll;
     
int main() { _io
  int lon; cin>>lon;
  int row[lon];
  forn(i,lon) cin>>row[i];
  int l=0,r=lon-1;
  int sereja=0,dima=0;
  int m;
  bool serejaTurn = true;
  while(l <= r){
 
    if(row[l]>row[r]) m = row[l++];
    else m = row[r--];
    
    if(serejaTurn) sereja += m;
    else dima += m;
    serejaTurn = !serejaTurn;
  }
  cout<<sereja<<" "<<dima<<endl;
  return 0;
}

