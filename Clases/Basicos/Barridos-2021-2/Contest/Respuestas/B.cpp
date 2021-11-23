//https://atcoder.jp/contests/abc130/tasks/abc130_d?lang=en
//D - Enough Array
//GioKim
#include <bits/stdc++.h>

using namespace std;

#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define vt vector
#define fi first
#define se second
#define pb push_back
#define popb pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define szi(x) (int)(x).size()
#define szl(x) (lli)(x).size()

#define all(v) (v).begin(), (v).end()
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define gauss(n) (n*(n+1)/2)

#define each(x,a) for(auto &x: a)

#define forM(i,a,b,t,s) for(t i = t(a); i < t(b); i+=s)
#define forMe(i,a,b,t,s) for(t i = t(a); i <= t(b); i+=s)

#define frrM(i,a,b,t,s) for(t i = t(a); t(i*i) < t(b); i+=s)
#define frrMe(i,a,b,t,s) for(t i = t(a); t(i*i) <= t(b); i+=s)

#define forr(i,a) for (int i = (a)-1; i >= 0; i--)
#define forra(i,a,b) for (int i = (b)-1; i >= a; i--)

#define fora(i,a,b,t) forM(i,a,b,t,1)
#define forae(i,a,b,t) forMe(i,a,b,t,1)

#define fort(i,b,t) forM(i,0,b,t,1)

#define fori(i,b) forM(i,0,b,int,1)
#define foria(i,a,b) forM(i,a,b,int,1)
#define foris(i,a,b,s) forM(i,a,b,int,s)

#define forie(i,b) forMe(i,0,b,int,1)
#define foriea(i,a,b) forMe(i,a,b,int,1)
#define fories(i,a,b,s) forMe(i,a,b,int,s)

#define frri(i,a,b,s) frrMe(i,a,b,int,s)

#define forl(i,b) forM(i,0,b,lli,1)
#define forla(i,a,b) forM(i,a,b,lli,1)
#define forls(i,a,b,s) forM(i,a,b,lli,s)

#define forle(i,b) forMe(i,0,b,lli,1)
#define forlea(i,a,b) forMe(i,a,b,lli,1)
#define forles(i,a,b,s) forMe(i,a,b,lli,s)

#define frrl(i,a,b,s) frrMe(i,a,b,lli,s)

typedef long long ll;
typedef long long int lli;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<lli, lli> pll;
typedef pair<ld, ld> pdd;
typedef vt<int> vi;
typedef vt<vi> vvi;
typedef vt<pii> vpi;
typedef vt<ll> vll;
typedef vt<lli> vli;
typedef complex<ld> cd;

const double PI = acos(-1.0);

void solve(){
    lli N,K,sum = 0,sol = 0;
    int r = 0;
    cin>>N>>K;
    vi arr(N);
    each(x, arr) cin>>x;
    forl(l, N) {
        while(sum < K and r != N) {
            sum += arr[r];
            r++;
        }
        if(sum >= K) sol += N - r + 1;
        sum -= arr[l];
    }
    cout<<sol<<endl;
}

int main() { _io
    solve();
    return 0;
}

