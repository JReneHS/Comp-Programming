//https://codeforces.com/problemset/problem/1354/B
//B. Ternary String
//GioKim
#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
 
#define max 2000000
typedef long long int lli;
 
int calculateVal(char a){
    return (int)a - 48;
}
 
int main() { _io
    int cases, f, b,sstr;
    cin>>cases;
    while(cases--) {
        f = b = 0;
        string s; cin>>s;
        sstr = s.size();
        
        int n[] = {max,0,0,0};
        
        while(b <= sstr - 3) {
            if(n[1]!=0 && n[2]!=0 && n[3]!=0){
                n[0] = min(n[0], f-b);
                n[calculateVal(s[b])]--;
                b++;
            } else if(f != sstr){
                n[calculateVal(s[f])]++;
                f++;
            } else {
                break;
            } 
        }

        if( n[0] < 3 || n[0] == max)
            cout<<0<<endl;
        else
            cout<<n[0]<<endl;
    }
    return 0;
}