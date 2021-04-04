#include <bits/stdc++.h>

using namespace std;

int main(){
    int h,w; cin>>h>>w;
    
    auto area= 0.0;
    auto inside = false;

    auto matrix = vector<string>(h);
    for(auto& line : matrix){cin>>line;}


    for(const auto& line : matrix) {
        for(const auto symbol : line) {
            const auto isDiagonal = symbol == '/' or symbol == '\\';
            if(isDiagonal) {inside = !inside; area += 0.5;}
            if(inside and symbol == '.') {area +=1;}
        }
    }
    cout<<area<<endl;
    return 0;
}


