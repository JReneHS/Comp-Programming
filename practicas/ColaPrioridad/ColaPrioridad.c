#include <bits/stdc++.h>
#include "ColaPrioridad.h"

using namespace std;

void crearColaPrioridad(ColaPrioridad* cp){
    int j;
    cp -> numPrioridades = N;
    for(j = 0; j < N; j++) {
        crearCola(&(cp->colas[j]));
    }
}

void insertarEnPrioridad(ColaPrioridad* cp, Proceso t){
    if(t.priority < cp->numPrioridades ) {
        insertar(&cp->colas[t.priority], t);
    } else {
        cout<<"Tarea de Prioridad Fuera de Rango";
    }
}

Proceso elementoMinimo(ColaPrioridad cp){
    
}

Proceso quitarMinimo(ColaPrioridad* cp);

int colaPrioridadVacia(ColaPrioridad cp);

