#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<bool> arr(50, true);
    vector<int> criba;
    int a,b; cin>>a>>b;

    arr[0] = arr[1] = false;
    for(auto i = 2; i < 50; i++){
        if(arr[i]) {
            criba.push_back(i);
            for(auto j = 2; j*i < 50; j++){
                arr[i*j] = false;
            }
        }
    }
    int res = 0;
    for(auto x : criba) {
        if(x == a) break;
        res++;
    }
    if(criba[res+1] == b) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}


