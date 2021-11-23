//https://codeforces.com/contest/1355/problem/C
//C. Count Triangles
//GioKim
#include <bits/stdc++.h>
 
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
typedef long long int lli;
 
const int MAXT = 5e6 + 57;
  
vector<lli> ranks(MAXT);
vector<lli> prefixSum(MAXT);
vector<lli> sufixSum(MAXT);
 
 
int main(){ _io
    int a,b,c,d;
    
    cin>>a>>b>>c>>d;
    
    for (int i = a; i <= b; i++) {
        ranks[i+b] += 1;
        ranks[i+c+1] -= 1;
    }
    
    for (int i = 1; i < MAXT; i++) {
        prefixSum[i] = prefixSum[i-1] + ranks[i];
    }
    
    for(int i = MAXT-1; i>0; i--) {
        sufixSum[i] = sufixSum[i+1] + prefixSum[i];
    }
    
    lli ans = 0;
    for(int i = c; i<=d; i++){
        ans +=sufixSum[i+1];
    }
    
    cout<<ans<<endl;
}