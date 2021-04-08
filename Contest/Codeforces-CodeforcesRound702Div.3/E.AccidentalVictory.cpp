// time-limit: 2000
// problem-url: https://codeforces.com/contest/1490/problem/E
#include <bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define forl(i,n) for (ll i = 0; i < (ll)n; i++)
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

const ll MAX = 10e5 + 57;
ll a[MAX],b[MAX];

void solve(){
	ll n,i,sum=0,minans=0;
	cin>>n;
	for(i=0;i<n;++i)scanf("%lld",a+i),b[i]=a[i];
	sort(a,a+n),minans=a[0];
	for(i=0;i<n-1;++i){
		sum+=a[i];
		if(sum<a[i+1])minans=a[i+1];
	}
	sum=0;
	forl(i,n)
		if(b[i]>=minans)sum++;
	cout<<sum<<endl;
	forl(i,n)
		if(b[i]>=minans)cout<<i+1<<" ";
	cout<<endl;
}
int main(){
	ll t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}