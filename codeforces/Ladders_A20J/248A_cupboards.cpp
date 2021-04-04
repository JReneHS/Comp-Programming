#include <bits/stdc++.h>

using namespace std;
int main(){
    auto i0 = 0;
    auto i1 = 0;
    auto d0 = 0;
    auto d1 = 0;
    auto karlsson = 0;
    auto is_a_thief = 0;
    int a; cin>>a;
    while(a--) {
        int i,d;
        cin>>i>>d;
        if(i == 0){ i0++;}
        else {i1++;}
        if(d == 0) {d0++;}
        else {d1++;}

    }
    karlsson = (i0 > i1)?i1:i0;
    is_a_thief = (d0 > d1)?d1:d0;
    cout<<karlsson+is_a_thief<<endl;
    return 0;
}


