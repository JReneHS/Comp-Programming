#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _io
    int c;cin>>c;
    auto i = 0;
    while(i != c){
        cout<<((i*(i+1)/2)*3)-i<<' ';
        i++;
    }
    cout<<endl;
    return 0;
}


