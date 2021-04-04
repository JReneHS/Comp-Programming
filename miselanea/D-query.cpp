#include <bits/stdc++.h>

#define endl '\n'
#define fi first
#define se second
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define forr(i,a,b) for (int i = a; i <= b; i++)
#define all(v) v.begin(), v.end()
#define pb push_back

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;

struct Query {
	int l, r, ind;
};

void add (int i, int k, vector<int> &ft) {
	while (i < ft.size()) {
		ft[i] += k;
		i += i & -i;
	}
}

int sum (int i, vector<int> &ft) {
	int res = 0;
	while (i) {
		res += ft[i];
		i -= i & -i;
	}
	return res;
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> a(n + 1);
	vector<int> ft(n + 1);
	vector<int> ant(1e6 + 1, -1);
	
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	
	int q;
	cin >> q;
	
	vector<int> res(q + 1);
	vector<vector<Query>> queries(n + 1);
	
	for (int i = 1; i <= q; i++) {
		int l, r;
		cin >> l >> r;
		queries[r].push_back({l, r, i});
	}
	
	for (int i = 1; i <= n; i++) {
		add(i, 1, ft);
		if (ant[a[i]] != -1)
			add(ant[a[i]], -1, ft);
		ant[a[i]] = i;
		
		for (Query qr : queries[i])
			res[qr.ind] = sum(qr.r, ft) - sum(qr.l - 1, ft); 
	}
	
	for (int i = 1; i <= q; i++)
		cout << res[i] << endl;
	
	return 0;
}