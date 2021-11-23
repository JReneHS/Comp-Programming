#include <bits/stdc++.h>

using namespace std;

#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define szi(x) (int)(x).size()
#define szl(x) (lli)(x).size()

#define all(v) (v).begin(), (v).end()
#define MOD(n,k) ( ( ((n) % (k)) + (k) ) % (k))
#define gauss(n) (n*(n+1)/2)

#define each(x,a) for(auto &x: a)
#define forM(i,a,b,t,s) for(t i = t(a); i < t(b); i+=s)
#define fori(i,b) forM(i,0,b,int,1)

const double PI = acos(-1.0);

void solve(){
    int n, m, area, ins;
    string s;
    while(cin >> n >> m) {
        area = ins = 0;
        fori(j, n) {
            cin >> s;
            fori(i,m) {
                if(s[i] =='.')
                    area+=ins;
                else if(ins) {
                    area++;
                    ins=0;
                } else
                    ins=1;
                }
        }
    cout << area << endl;
    }
}

int main() { _io
    solve();
    return 0;
}
