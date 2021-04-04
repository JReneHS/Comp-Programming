#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr,int lef,int rig, int mid) {

//Variables de uso muliple
    int i,j,k,n1,n2;

//Pivotes para control de los bucles
    n1 = mid-lef+1;
    n2 = rig-mid;

//Arrays auxiliares
    vector<int> auxL(n1);
    vector<int> auxR(n2);

//Copia de los valores a las array auxiliares
    for(i = 0; i < n1;++i) auxL[i] = arr[lef+i];
    for(j = 0; j < n2;++j) auxR[j] = arr[mid+1+j];

    i = j = 0;
    k = lef;

//Comparacion y ordenamiento usando las arrays auxiliares
    while(i < n1 && j < n2) {
        if(auxL[i] <= auxR[j]) {
            arr[k] = auxL[i];
            i++;
        } else {
            arr[k] = auxR[j];
            j++;
        }
        k++;
    }
//Copiando los elementos restantes de los auxiliares en caso que haya alguno
    while(i < n1) {
        arr[k] = auxL[i];
        k++;
        i++;
    }
    while(j < n2) {
        arr[k] = auxR[j];
        k++;
        j++;
    }
}

void mergeSort(vector<int> &arr,int lef,int rig){
//Mientras el valor de left sea menor al de right
    if(lef < rig) {
//entero para obtener el valor medio del array
        auto mid = lef + (rig - lef)/2;
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


