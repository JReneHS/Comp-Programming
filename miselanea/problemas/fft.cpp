#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define fi first
#define se second
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define fori(i,n) for (int i = 0; i < int(n); i++)
#define forl(i,n) for (lli i = 0; i < lli(n); i++)
#define fora(i,n,t) for (t i = 0; i < t(n); i++)
#define fore(i,a,b) for (int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define pb push_back
#define popb pop_back
#define mk make_pair
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<ll> vll;
typedef vector<lli> vlli;
typedef complex<double> comp;

const double PI = acos(-1.0);

void fft(vector<comp> & X, int inv){
int n = X.size();
for(int i = 1, j = 0; i < n - 1; ++i){
for(int k = n >> 1; (j ^= k) < k; k >>= 1);
if(i < j) swap(X[i], X[j]);
}
vector<comp> wp(n>>1);
for(int k = 1; k < n; k <<= 1){
for(int j = 0; j < k; ++j)
wp[j] = polar(1.0, PI * j / k * inv);
for(int i = 0; i < n; i += k << 1){
for(int j = 0; j < k; ++j){
comp t = X[i + j + k] * wp[j];
X[i + j + k] = X[i + j] - t;
X[i + j] += t;
}
}
}
if(inv == -1)
for(int i = 0; i < n; ++i)
X[i] /= n;
}

int main() { _io
  vector<comp> ss;
  return 0;
}

