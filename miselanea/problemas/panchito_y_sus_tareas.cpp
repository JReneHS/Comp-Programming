#include <bits/stdc++.h>

/*
 * =====================================================================================
 *
 *       Filename:  panchito_y_sus_tareas.cpp
 *
 *    Description:  problema 12083 de OmegaUp para clase de Análisis de Algoritmos
 *                  Usando MergeSort en su resolucion
 *
 *       Compiler:  g++ -Wall Wpedantic -std=c++17
 *       Lenguaje:  C++ 17
 *
 *         Author:  HERNÁNDEZ SÁNCHEZ JUAN RENÉ
 *   Organization:  ESCOM
 *       Profesor:  RAFAEL NORMAN SAUCEDO DELGADO
 *          Grupo:  3CV3
 *
 * =====================================================================================
 */

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
    long long int tiempo,aux;
    int tareas,c;
    cin>>tareas>>tiempo;
    vector<int> arr;
    while(tareas--){
        cin>>c;
        arr.push_back(c);
    }
    mergeSort(arr,0,arr.size()-1);
    c = 0;
    for(auto x:arr){
        aux = tiempo;
        if( aux-x >= 0){
            tiempo-=x;
            c++;
        } else {
            break;
        }
    }
    cout<<c<<endl;

    return 0;
}

