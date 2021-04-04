#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr,int lef,int rig, int mid) {

//Variables de uso muliple
    int begL,begR,aux;

//Pivotes para control de los bucles
    begL = lef;
    begR = mid+1;

//Comparacion y ordenamiento usando las arrays auxiliares
    while(begL <= mid && begR <= rig) {
        if(arr[begL] <= arr[begR]) {
            begL++;
        } else {
            aux = arr[begR];
            for(auto i = begR; i > begL; --i) {
                arr[i]=arr[i-1];
            }
            arr[begL] = aux;
            begR++;
        }
    }
}

void mergeSort(vector<int> &arr,int lef,int rig){
//Mientras el valor de left sea menor al de right
    if(lef < rig) {
//entero para obtener el valor medio del array
        auto mid = (lef + rig)/2;
//LLamada recursiva a mergeSort para array Izquierdo
        mergeSort(arr, lef,mid);
//LLamada recursiva a mergeSort para arrya Derecho
        mergeSort(arr, mid+1,rig);
//LLamada a la funcion de mezcla
        merge(arr,lef,rig,mid);

    }

}

int main() {
//array que se  va a ordenar
    vector<int> arr;

//entero auxiliar para leer de la entrada estandar
    int c;

//mientras haya que leer en el buffer almacena en arr
    while(cin>>c)arr.push_back(c);

//Impresion de los valores leidos
    for(auto x: arr)cout<<x<<" ";
    cout<<'\n'<<endl;

//Llamada a la funcion merge sort
    mergeSort(arr,0,arr.size()-1);

//Impresion de los valores leidos
    for(auto x: arr)cout<<x<<" ";
    cout<<'\n'<<endl;

    return 0;
}


