// time-limit: 2500
// problem-url: https://codeforces.com/contest/816/problem/B
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

const int MAX_TEMP = 2e5+20;

int main() { _io
  int n, k, q, l, r; cin>>n>>k>>q;
  vll mar(MAX_TEMP);
  forn(i,n) {
    cin>>l>>r;
    mar[l] += 1;
    mar[r+1] -= 1;
  }

  vll rec(MAX_TEMP);
  ll sumRec = 0;

  forr(i,1,MAX_TEMP){
    sumRec += mar[i];
    rec[i] = sumRec;
  }

  vll upEx(MAX_TEMP);

  forr(i,1,MAX_TEMP){
    upEx[i] = (rec[i] >= k? 1:0);
  }
  
  vll prefixSum(MAX_TEMP,0);
  forr(i,1,MAX_TEMP){
    prefixSum[i] = prefixSum[i-1] + upEx[i];
  }

  while(q--) {
    cin>>l>>r;
    cout<< prefixSum[r] - prefixSum[l-1]<<endl;
  }

  return 0;
}

