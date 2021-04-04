#include <bits/stdc++.h>

#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

template <typename T> retMax(T a, T b) {
    return (a>b)? a:b;
}
//Se pueden sobrecargar los operadores
int main() { _io
    cout<<retMax(55;30)<<endl;
    cout<<retMax("AADD","BBZZ");
    cout<<retMax(5.23,6.8);
    cout<<retMax('A','C');

    pair<int,double> parCosas;
    vector<int> v = {4,5,9,3};

    vector<pair<int,map<string,set<pair<int,int>>>>> queCarajosPeroCompila;

    for(auto element: queCarajosPeroCompila)
        cout<< (*element.second["Hola"].begin()).second << endl;

//Containers
    array<int> b;
//Arreglo tradicional de C++
//tiene valores semanticos
//sigue siendo de acceso constante
//se puede mandar por copia o por referencia o argumento
//Son fijos
    vector<double> c;
//se basa en los arreglos con espacio semi-dinamico
//Tiene acceso constante
//realiza potencias binarias y cuando se llena copia el array en uno nuevo
//sus copias las hace en tiempo N
    list<string> d;
//es una lista completamente dinamica
//usa nodos de memoria
//usa iteradores
//usa containers e interfaces
//  stack >> Se limita solo a push pop y top
//  Queue >> push pop y front
//  Dequeue >> push pop-Back pop-Front front back
//  Forward_list >> limita su acceso de adelante hacia atras

//Priority Queue
//  es la implementacion de un Heap
//  la funcion de ordenamiento es programable

//Set
//  es la implementacion de un Arbol Binario de Busqueda autobalanceado (Red Black Tree)
//  mantiene elementos unicos en si mismo
//  su funcion es mantener conjuntos de datos en su interior

//Map
//  es un Red Black Tree con pares (std::pair) que se ordena meiante elementos first
//  guarda la llave en el elemento second
//  al igual que el set, mantiene los elementos unicos

//Multi Set/Map
//  es una sobrecarga de un set o de un map que permite multiples elementos (que se repiten)
//  se pueden hacer aritmetica para saber cuantas veces elementos hay repetidos
//  Los elementos repetidos se guardan juntitos
//  En el multimap es poderoso ya que se puede guardar muchos elementos bajo un mismo key
//  es de Tiempo Log(N)

//Unordered set/map/multiset/multimap
//  es una reinterpretacion de las estructuras
//  cambia la implementacion de arboles por tablas Hash
//  Solo hay funciones de Hasheo para los tipos primitivos
//  si quieres hashear otros tipos de datos tienes que implementarlo
    return 0;
}


