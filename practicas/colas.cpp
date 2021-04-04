#include <bits/stdc++.h>

using namespace std;

struct nodo {
    int val;
    nodo *nextN;

    nodo(int x) {
        val = x;
        nextN = NULL;
    }
};

struct Queue {
    nodo *begin;
    nodo *end;
    int s;
    Queue() {
        begin = NULL;
        end = NULL;
        s = 0;
    }

    bool vacia() {return end == NULL;}

    int size() {return s;}

    void insertar(int x) {
        if(vacia()) {
            begin = end = new nodo(x);
        } else {
            end->nextN = new nodo(x);
            end = end->nextN;
        }
        s++;
    }

    int tope() {
        if(vacia()) return INT_MAX;
        else return begin->val;
    }

    int eliminar() {
        int t = tope();
        if(vacia()) {
            cout<<"Queue Empty: "<<t<<endl;
        } else if(end == begin){
            s--;
            delete(begin);
            begin = end = NULL;
        } else {
            s--;
            nodo *aux = begin;
            begin = begin->nextN;
            delete(aux);
        }
        return t;
    }
};

int main() {
    Queue *myQ = new Queue();
    for(int i = 0; i < 10; i++)myQ->insertar(i);
    for(int i = 0; i < 11; i++)cout<<myQ->eliminar()<<" "<<myQ->size()<<endl;
    return 0;
}

//Implementar de forma estática y circular
