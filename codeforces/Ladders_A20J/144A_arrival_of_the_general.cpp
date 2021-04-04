#include <bits/stdc++.h>

using namespace std;

int main(){
    int c; cin>>c;
    int cc = c;
    vector<int> line_up;
    vector<int> inverse;
    
    while(c--) {
    int dd; cin>>dd;
    line_up.push_back(dd);
    }

    for(auto i = 0; i < cc; i++)
        inverse.push_back(line_up[cc - (i + 1)]);

    vector<int>::iterator bi = max_element(line_up.begin(), line_up.end());
    vector<int>::iterator mi = min_element(inverse.begin(), inverse.end());
    
    int biger = distance(line_up.begin(),bi);
    int minim = distance(inverse.begin(), mi);
    if(biger + minim >= cc){
        cout<<biger + minim -1<<endl;
    } else {
        cout<<biger + minim<<endl;
    }
    return 0;
}


