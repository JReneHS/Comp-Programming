#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int s1,s2,s3,s4;cin>>s1>>s2>>s3>>s4;
    int res {0};
    if(!(s1 != s2 && s1 != s3 && s1 != s4))res++;
    if(!(s2 != s3 && s2 != s4))res++;
    if(!(s3 != s4))res++;
    cout<<res<<'\n';
    return 0;
}


