#include <algorithm>
#include <iostream>
#include <vector>
#include <array>


using namespace std;


inline double Calcula(double a, double b);
void Log(char *mensaje);

long variable = 666;
char *PROGRAMA = "Globales> ";

int main(){
    Log("vamos a probar los operadores");

    unsigned int test = 0;
    double a = 23, b = 21, c = 34;

    Log("Dame valores\n");
    cout<<a<<" "<<b<<" "<<c<<" "<<test<<endl;
    
    return 0;
}


double Calcula(double a, double b){
    a *= 1234;
    b *= 4321 + a;

    return (a / b) * variable;
}

void Log(char *mensaje){
    cout<<PROGRAMA<<" "<<mensaje<<endl;

}
