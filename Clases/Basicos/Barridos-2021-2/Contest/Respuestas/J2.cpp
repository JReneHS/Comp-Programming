#include <bits/stdc++.h>

using namespace std;
void solve(int h) {
    int area= 0;
    vector<string> matrix(h);
    for(auto& line : matrix) cin>>line;

    for(auto& line : matrix) {
        auto ins = false;
        for(auto& symbol : line) {
            if(symbol == '/' or symbol == '\\') {
                area++;
                ins=!ins;
            } else if(ins and symbol == '.')
                area +=2;
        }
    }
    cout<<(area/2)+((area&1)?1:0)<<endl;
}

int main(){
    int h,w;
    while(cin>>h>>w)
        solve(h);
    return 0;
}


