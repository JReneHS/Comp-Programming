#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int solve(string X, string Y, int m, int n){
   int longest[m + 1][n + 1];
   int len = 0;
   int row, col;
   for (int i = 0; i <= m; i++) {
      for (int j = 0; j <= n; j++) {
         if (i == 0 || j == 0)
            longest[i][j] = 0;
         else if (X[i - 1] == Y[j - 1]) {
            longest[i][j] = longest[i - 1][j - 1] + 1;
            if (len < longest[i][j]) {
               len = longest[i][j];
               row = i;
               col = j;
            }
         }
         else
            longest[i][j] = 0;
      }
   }
   return len;
}
int main() { _io
    int cases, ls;
    string X;
    string Y;
    cin>>cases;
    int len1, len2, quers;
    while(cases--) {
      cin>>X;
      cin>>Y;
      len1 = X.size();
      len2 = Y.size();
      ls = solve(X,Y,len1, len2);
      quers = len1 + len2 - ls*2;
      cout<<quers<<endl;
    }
    return 0;
}
