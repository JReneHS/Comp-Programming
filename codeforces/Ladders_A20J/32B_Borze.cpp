#include <bits/stdc++.h>

using namespace std;

int main(){
    string borze;
    vector<int> code;
    getline(cin,borze);
    for(unsigned int i = 0; i < borze.length(); i++) {
        if(borze[i] == '-' && borze[i+1] == '-') {
            code.push_back(2);
            i++;
        } else if(borze[i] == '-' && borze[i+1] == '.') {
            code.push_back(1);
            i++;
        } else {
            code.push_back(0);
        }
    }
    for(auto n : code) {
        cout<<n;
    }
    return 0;
}


