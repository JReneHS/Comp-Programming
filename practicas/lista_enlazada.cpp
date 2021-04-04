#include <bits/stdc++.h>

using namespace std;

struct nodo {
    nodo* next_nod;
    int value;
//Constructor
    nodo(int newData){
        next_nod = NULL;
        value = newData;
    }
};

struct lista_enlazada {
    nodo* root = NULL;
    nodo* end = NULL;

void agregarNodoRecorrido(int x) {
    if(root == NULL){
        root = new nodo(x);
    } else {
        nodo* nAct = root;
        while(nAct->next_nod != NULL) {
            nAct = nAct->next_nod;
        }
        nAct->next_nod = new nodo(x);
    }
}

void agregarNodo(int x) {
    if(root == NULL){
        root = new nodo(x);
        end = root;
    } else {
        end->next_nod = new nodo(x);
        end = end->next_nod;
    }
}

void imprimirNodos(){
    nodo* nact = root;
    if(nact == NULL){
        cout<<"Lista Vacia"<<endl;
    } else {
        do {
            cout<<nact->value<<" -> ";
            nact = nact->next_nod;
        } while(nact != NULL);
        cout<<"NULL"<<'\n'<<endl;
    }
}

void borrarNodoPos(int pos){
    nodo* nact = root;
    if(pos <= 0) {
        cout<<"Ingresa una Posicion Valida"<<endl;
        return;
    }
    if(nact == NULL) {
        cout<<"Lista Vacia"<<endl;
        end = NULL;
        return;
    }
    if (pos == 1){
        root = nact->next_nod;
        return;
    } else {
        auto i = 1;
        while(i != pos-1) {
            nact = nact->next_nod;
            i++;
        }
        if((nact->next_nod) == end){
            end = nact;
        }
        nact->next_nod = nact->next_nod->next_nod;
    }
}

};

lista_enlazada entrelazarListas(lista_enlazada s1, lista_enlazada s2) {
    nodo* per1;
    nodo* per2;
    per1 = s1.root;
    per2 = s2.root;
    lista_enlazada ss;
    while(per1 != NULL || per2 != NULL) {
        if(per1 != NULL) {
            ss.agregarNodo(per1->value);
            per1 = per1->next_nod;
        }
        if(per2 != NULL) {
            ss.agregarNodo(per2->value);
            per2 = per2->next_nod;
        }
    }
    return ss;
}

int main(){
    lista_enlazada nn,n1,n2,n3;
    for(auto x = 0;x<11;x++) {
        nn.agregarNodo(x);
        if((x&1) == 0) {
            n1.agregarNodo(x);
        } else {
            n2.agregarNodo(x);
        }
    }

    nn.imprimirNodos();
    n1.imprimirNodos();
    n2.imprimirNodos();
    n3 = entrelazarListas(n1,n2);
    n3.imprimirNodos();
    cout<<"end nn: "<<nn.end->value<<endl;
    cout<<"end n1: "<<n1.end->value<<endl;
    cout<<"end n2: "<<n2.end->value<<endl;
    cout<<"end n3: "<<n3.end->value<<endl;
    while(nn.root != NULL) {
        nn.borrarNodoPos(1);
        nn.imprimirNodos();
        cout<<"end nn: "<<nn.end->value<<endl;
    }
    auto s = 11;
    while(s>= 0) {
        n3.borrarNodoPos(s);
        n3.imprimirNodos();
        cout<<"end n3: "<<n3.end->value<<endl;
        s--;
    }
    nn.agregarNodo(23);
    nn.agregarNodo(24);
    nn.agregarNodo(25);
    n3.agregarNodo(23);
    n3.agregarNodo(24);
    n3.agregarNodo(25);
    nn.imprimirNodos();
    n3.imprimirNodos();
    cout<<"end nn: "<<nn.end->value<<endl;
    cout<<"end n3: "<<n3.end->value<<endl;
    return 0;
}

