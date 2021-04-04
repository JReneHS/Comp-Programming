#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n,odd,even;cin>>t;
    while(t--){
        odd = even = 0;
        auto sum = 0;
        int s,x;
        cin>>n;
        x = n;
        while(x--){
            cin>>s;
            if((s&1) == 1)odd++;
            else even++;
            sum += s;
        }
        if((sum&1) == 1) cout<<"YES";  
        else if(odd > 0 && odd != n) {
            cout<<"YES";
        }else cout<<"NO";
        cout<<'\n';
    }
    return 0;
}

