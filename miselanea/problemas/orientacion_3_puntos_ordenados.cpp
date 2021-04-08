#include <bits/stdc++.h>

using namespace std;

struct point{
    int x,y;
};

int orientation(point p1, point p2, point p3){
    int val = (p2.y-p1.y)*(p3.x-p2.x)-(p3.y-p2.y)*(p2.x-p1.x);
    if(val == 0) return 0;
    return (val > 0)?1:-1;
}

int main() {
    struct point p1,p2,p3;
    cin>>p1.x>>p1.y;
    cin>>p2.x>>p2.y;
    cin>>p3.x>>p3.y;
    auto o = orientation(p1,p2,p3);
    cout<<"The points p1{"<<p1.x<<","<<p1.y<<"} p2{"<<p2.x<<","<<p2.y<<"} p3{"<<p3.x<<","<<p3.y<<"}"<<endl;
    if(o == 0)cout<<"is Colinear.";
    if(o > 0)cout<<"is Clock wise.";
    if(o < 0)cout<<"is counterclock wise.";
    cout<<endl;
    return 0;
}


