//https://codeforces.com/contest/1203/problem/D2
//D2. Remove the Substring (hard version)
//GioKim
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

const int maxn = 2e5+57;
 
typedef long long ll;

string a;
string b;
int f[maxn];
 
int main() { _io
    cin >> a >> b;
    f[0] = -1;
    int k = 1, p1, p2;
    int sza = a.size();
    int szb = b.size();
    for(p1 = 0, p2 = 0; p1 < sza; p1++) {
        if(p2 < szb && a[p1] == b[p2]) {
            f[k++] = p1;
            p2++;
        }
    }
    int ans = 0;
    for(p1 = sza - 1, p2 = 0; p1 >= 0; p1--) {
        ans = max(ans, p1 - f[szb - p2]);
        if(p2 < szb && a[p1] == b[szb - p2 - 1]) {
            p2++;
        }
    }
    cout << ans << endl;
    return 0;
}
