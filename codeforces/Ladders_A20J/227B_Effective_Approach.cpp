#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    vector<int> pos(n+1);
    long long int vasya = 0;
    long long int petya = 0;
    for(auto x = 1; x <= n; x++){
        int c;cin>>c;
        pos[c]=x;
    }
    int numsQ;cin>>numsQ;
    vector<int> querys(numsQ);
    for(auto &x:querys)cin>>x;

    for(auto q: querys){
        vasya += pos[q];
        petya += n-pos[q]+1;
    }
    cout<<vasya<<" "<<petya<<endl;
    return 0;
}


