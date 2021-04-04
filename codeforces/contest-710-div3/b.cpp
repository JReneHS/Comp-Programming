#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io
    int c,n,k;cin>>c;
    int dots,l,r,dis;
    string s;
    while(c--){
      cin>>n>>k;
      cin>>s;
      l = 0;
      r = n;
      while(s[l] != '*') l++;
      while(s[r] != '*') r--;
      if(l == r){dots=1;}
      else{
	
      }
      
      cout<<dots<<endl;
    }
    return 0;
}
