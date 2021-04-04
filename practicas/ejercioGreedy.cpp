#include <bits/stdc++.h>

using namespace std;

int greedyChange(int *coinSet, int n, int N) {
    if(N == 0) return 0;
    if(N < 0) return INT_MAX;
    int coins = INT_MAX;
    for(auto i = 0; i < n; i++) {
        int res = greedyChange(coinSet, n, N - coinSet[i]);
        if(res != INT_MAX) {coins = min(coins, res +1);cout<<coinSet[i];}
    }
    return coins;
}

int main() {
    int copper; cin>>copper;
    int coinSet[] = {1,2,5,10,20};
    int size = 5; 
    cout<<"Cambio: "<<greedyChange(coinSet, size, copper)<<endl;;
    return 0;
}


