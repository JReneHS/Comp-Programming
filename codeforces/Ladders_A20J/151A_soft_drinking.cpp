#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;
    vector<int> pre(3);

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    pre[0] = c*d;
    pre[1] = (k*l)/nl;
    pre[2] = p/np;
    vector<int>::iterator pretoasts = min_element(pre.begin(),pre.end());
    int toasts = pretoasts[0]/n;
    cout<<toasts<<endl;
    return 0;
}


