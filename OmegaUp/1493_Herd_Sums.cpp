#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io
    int b, f, cot, goal, gauss;
    cin>>goal;
    b = f = 0;
    cot = 1;
    while(f != goal) {
      gauss = ((f*(f+1))-(b*(b-1)))/2;
      if(gauss == goal) {
	cot++;
	f++;
      } else if(gauss < goal) {
	f++;
      } else {
	b++;
      }
    }
    cout<<cot<<endl;
    return 0;
}
