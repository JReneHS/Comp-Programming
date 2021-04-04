/*
 * =====================================================================================
 *
 *       Filename:  ColaPrioridad.h
 *
 *    Description: Cola de Prioridad 
 *
 *        Version:  1.0
 *        Created:  11/02/20 23:40:45
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef _colaPrioridad_
#define _colaPrioridad_
#define N 12

typedef struct {
    int priority;
    char tarea[128];
}Proceso;

typedef Proceso process;

#include "ColaDinamica.h"

typedef struct {
    int numPrioridades;
    Cola colas[N];
}ColaPrioridad;

void crearColaPrioridad(ColaPrioridad* cp);
void insertarEnPrioridad(ColaPrioridad* cp, Proceso t);
Proceso elementoMinimo(ColaPrioridad cp);
Proceso quitarMinimo(ColaPrioridad* cp);
int colaPrioridadVacia(ColaPrioridad cp);

#endif
