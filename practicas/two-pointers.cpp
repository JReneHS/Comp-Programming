#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;
//Problema motivacional
//dada un arreglo de numeros enteros
//encontrar todas las subcadenas que al sumar sus elementos den x numero

int main() { _io
    auto sum = 15;
    vector<int> a;
    for(int i = 1; i <= 15; i++)
        a.push_back(i);

    int i = a.size(), ans = 0;
    int l = 0, r = 0, currsum = a[0];

    return 0;
}

//Tecnica de two pointers
//en vez de hacer un barrido de sumas solamente, se hace un barrido que borra las sumas anteriores
