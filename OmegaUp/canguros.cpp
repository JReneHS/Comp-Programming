#include <bits/stdc++.h>

#define endl "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

typedef long long int lli;

struct nodo {
    int v;
    nodo *nex;

    nodo(int x) {
        v = x;
        nex = NULL;
    }
};

struct cola {
    nodo *begin;
    nodo *end;
    int s;

    cola() {
        begin = NULL;
        end = NULL;
        s = 0;
    }

    bool vacia() {return end == NULL;}

    int tam() {return s;}

    void insertar(int x) {
        if(vacia()){
            begin = end = new nodo(x);
        } else {
            end->nex = new nodo(x);
            end = end->nex;
        }
        s++;
    }

    int eliminar() {
        int t = begin->v;
        s--;
        if(end == begin){
            delete(begin);
            begin = end = NULL;
        } else {
            nodo *aux = begin;
            begin = begin->nex;
            delete(aux);
        }
        return t;
    }
};


int main() { _
    int c,n,cp;cin>>c>>n;
    char act;
    cola *cl = new cola();
    while(n--){
        cin>>act;
        if(act == 'N'){
            cin>>cp;
            cp++;
            cl->insertar(cp);
        } else if(act == 'A'){
            c -= cl->eliminar();
        } else if(act == 'C'){
            cout<<cl->tam()<<endl;
        } else {
            cout<<c<<endl;
        }
    }
    return 0;
}
