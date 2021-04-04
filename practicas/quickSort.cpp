#include <bits/stdc++.h>

using namespace std;

void swapp(int *a, int *b) {
    auto t = *a;
    *a = *b;
    *b = t;
}

int particion(vector<int> &lista, int low, int high) {
    int pivot = lista[high];
    int i = (low - 1);
    for(auto j = low; j <= high -1 ; j++) {
        if(lista[j] < pivot) {
            i++;
            swapp( &lista[i], &lista[j]);
        }
    }
    swapp( &lista[i+1], &lista[high]);
    return (i+1);
}

void quickSort(vector<int> &lista, int low, int high) {
    if(low < high) {
        int pi = particion(lista,low,high);

        quickSort(lista, low, pi -1);
        quickSort(lista, pi+1,high);
    }
}

int main() {
    int c;
    vector<int> lista;
    
    while(cin>>c)lista.push_back(c);
    
    quickSort(lista, 0, lista.size() - 1);
    for(auto x: lista)cout<<x<<" ";
    cout<<endl;
    return 0;
}


