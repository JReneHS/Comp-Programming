#include <algorithm>
#include <iostream>

using namespace std;

int llamada(int x, int y) {
    cout<<"Vamos a llamar a la funcion...{"<<x<<" "<<y<<"}"<<endl;
    return (x + y);
}

int main(){
    int z = llamada(5,7);
    cout<<"Resultado: "<<z<<endl;

    cout<<"Resultado: "<<llamada(1,3)<<endl;
    return 0;
}


