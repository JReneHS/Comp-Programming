#include <bits/stdc++.h>

#define endl "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main() { _
    int c,n,cp;cin>>c>>n;
    char act;
    queue<int> cl;
    while(n--){
        cin>>act;
        if(act == 'N'){
            cin>>cp;
            cp++;
            cl.push(cp);
        } else if(act == 'A'){
            c -= cl.front();
            cl.pop();
        } else if(act == 'C'){
            cout<<cl.size()<<endl;
        } else {
            cout<<c<<endl;
        }
    }
    return 0;
}

