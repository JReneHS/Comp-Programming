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

    bool hayNodo(int x){
        nodo *aux = begin;
        while(aux != NULL){
            if(aux->val == x) return true;
            aux = aux->nextN;
        }
        return false;
    }
};

int main() {
    int n,k,id;cin>>n>>k;
    Queue *q = new Queue();
    vector<int> arr;
    while(n--){
        cin>>id;
        if(!q->hayNodo(id)){
            if(q->size() < k)q->insertar(id);
            else {
                q->insertar(id);
                q->eliminar();
            }
        }
    }
    cout<<q->size()<<'\n';
    while(!q->vacia())arr.push_back(q->eliminar());
    reverse(arr.begin(),arr.end());
    for(auto &x: arr)cout<<x<<" ";
    cout<<'\n';
    return 0;
}


