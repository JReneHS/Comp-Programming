#include <bits/stdc++.h>

using namespace std;

int main(){
    double n; cin>>n;
    double drinks = 0.0;
    for(auto x = 0; x < n; x++) {
        double c; cin>>c;
        drinks += c;
    }
    cout<<fixed<<setprecision(12)<<drinks / n<<endl;
    return 0;
}


