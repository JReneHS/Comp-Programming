#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,min1,min2;cin>>t;
    long long int a,b,x,y,n;
    while(t--){
        cin>>a>>b>>x>>y>>n;
        if(a-n>=x)
            min1 = a-n;
        else
            min1 = x;
        if(b-n>=y)
            min2 = b-n;
        else
            min2=y;
        if(min1<min2){
            if(a-n>=x)
                cout<<(a-n)*b<<endl;
            else{
                n-= a-x;
                a=x;
                if(b-n>=y)
                    b-=n;
                else
                    b=y;
                cout<<a*b<<endl;
            }
        } else {
            if(b-n>=y)
                cout<<(b-n)*a<<endl;
            else {
                n-=b-y;
                b=y;
                if(a-n>=x)
                    a-=n;
                else
                    a=x;
                cout<<a*b<<endl;
            }
        }
    }
    return 0;
}
