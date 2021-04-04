#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x;cin>>n>>x;
    char s;
    while(n--){
        cin>>s;
        if(s == 'o')
            x++;
        else if(x>0)
            x--;
    }
    cout<<x<<'\n';
    return 0;
}

