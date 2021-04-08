// time-limit: 2000
// problem-url: https://codeforces.com/contest/1506/problem/B
#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int i = 0;
    while(s[i] != '*') i++;
    s[i] = 'x';
    int cnt = 0;
    cnt++;
    while(true) {
        int j = min(n - 1, i + k);
        while(j > i && s[j] == '.') j--;
        if(i == j) break;
        cnt++;
        s[j] = 'x';
        i = j;
    }
    cout << cnt << '\n';
}
 
int main() { _io
    int te;
    cin >> te;
    while(te--) solve();
    return 0;
}
