#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
using namespace std;

struct complexNumber{
    float integer;
    float comp;

};

int main() {
    auto nk = 0;
    float nn;
    vector<float> numbersN;
    while(cin>>nn){
        nk++;
        numbersN.push_back(nn);
    }
    vector<struct complexNumber> numbersK(nk);
    vector<struct complexNumber> numbersNN(nk);
    int k;
    int n;
    for(k = 0; k<nk; k++){
        numbersK[k].integer = 0.0;
        numbersK[k].comp = 0.0;
        for(n = 0; n<nk;n++){
            numbersNN[n].integer = numbersN[n]*cos((2.0*(float)n*(float)k*M_PI)/10.0);
            numbersNN[n].comp = -numbersN[n]*sin((2.0*(float)n*(float)k*M_PI)/10.0);
            numbersK[k].integer += numbersNN[n].integer;
            numbersK[k].comp += numbersNN[n].comp;
        }
    }
    for(auto &x:numbersK){
        cout<<x.integer<<" + "<<x.comp<<" j"<<endl;
    }
    return 0;
}


