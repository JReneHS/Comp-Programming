#include <bits/stdc++.h>

using namespace std;
#define PI  3.14159265358979323846L
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
struct comp {
    float re;
    float com;

comp multi(comp y) {
    comp s;
    s.re = (re * y.re) - (com * y.com);
    s.com = (com * y.re) + (re * y.com);
    return s;
}

comp sum(comp y) {
    comp s;
    s.re = re + y.re;
    s.com = com + y.com;
    return s;
}

comp res(comp y) {
    comp s;
    s.re = re - y.re;
    s.com = com - y.com;
    return s;
}
};

vector<Complex> recursiveFFT(vector<double> &a) {
    unsigned int n = a.size();
    unsigned int n2 = n/2;
    if(n == 1) {
        double ss = a[0];
        vector<Complex> aa(1);
        aa[0] = Complex(ss,0.0);
        return aa;
    } else {
        Complex w, wn;
        double re = cos((2.0*PI)/(double)n);
        double com = sin((2.0*PI)/(double)n);
        wn = Complex(re,com);
        w = Complex(1.0,0.0);

        vector<double> a0(n2);
        vector<double> a1(n2);
        int j1,j2;
        j1 = j2 = 0;
        for(unsigned int i = 0; i<n; i++) {
            if((i&1) == 0) {
                a0[j1] = a[i];
                j1++;
            } else {
                a1[j2] =a[i];
                j2++;
            }
        }
        vector<Complex> y0 = recursiveFFT(a0);
        vector<Complex> y1 = recursiveFFT(a1);
        vector<Complex> y(n);
        /*
        for(unsigned int k=0; k<n2;k++) {
            y[k] = y0[k].sum(w.multi(y1[k]));
            y[k+n2] = y0[k].res(w.multi(y1[k]));
            w = wn.multi(w);
        }
        */
        unsigned int k;
        for( k = 0 ; k < n2; k++) {
            y[k] = y0[k] + w*y1[k];
            y[k+n2] = y0[k] - w*y1[k];
            w *= wn;
        }
        return y;
    }
}

int main() {
    double nn;
    vector<double> numbersN;
    while(cin>>nn){
        numbersN.push_back(nn);
    }
    vector<Complex>  res = recursiveFFT(numbersN);
    for(auto &x:res){
        cout<<x<<endl;
    }
    return 0;
}

/*

Recursive FFT(a)
n = a.length                 n es una potencia de 2

if n == 1
    return a
else
    w_n = e^2*pi*i/n
    w = 1                    la primera raiz compleja
    A[0] = (a0,a2,a4,...,an-2)    valores pares
    A[1] = (a1,a3,a5,...,an-1)    valores impares
    y[0] = Recursive-FFT(A[0])
    y[1] = recursive-FFT(a[1])

    for k = 0 to n/2 -1
        y_k = y[0]_k + w*y[1]_k
        y_(k+(n/2)) = y[0]_k - w*y[1]_k
        w = w*w_n
    return y                  se asume que y es una columna de vectores



Recibe polinomios y nos interesan los coeficientes
Hay que reinterpretar los polinomios


P(x) = a*x^2 + b*x + c
P(0) = c
P(1) = a + b + c

Discretizacion de los polinomios

x = 0, 1, 2, 3, 4, 5, 6, ...
P(x) = {......................}

Regla de Horner

P(12) = a*(12)*(12) + (12)(12)(12) + (12)(12)(12)(12) + ....
.
.
.
A(x_0) = a_0 + x_0(a_1)


grado = 1023 P(x) = 123x^{1023} + 25x^{1022} + ....... + 35x + 56
coeficientes = 1024


Polinomio: P(x) = x^2 + x + 2
Punto-valor: (0,2), (1,4), (2,8), (punto, valor), (x,p(x)).





Raiz compleja de Unidad

si w^n = 1
entonces n es la raiz de unidad de w

hay exacamente n raices n-esimas complejas.

e ^ 2*pi*k/n     para k = 0, 1, 2, ..., n-1

w_n = e ^ 2*pi*i/n

las raices de unidad se elevan a potencias de 2 para aprovechar la simetría


Propiedad de simetria
solo con nuna cuarta parte de los datosse puede obtener todas las raices de unidad

para n>= 0, k >= 0 y d > 0

(w_dn)^dk = (w_n)^k


(w_n)^n/2 = w_2 = -1


lema de Halving (lema de ir dividiendo sobre 2)

is n> 0 es par, entonces las n raices de unidad complejas del n-esimo de n/2 complejso son las (n/2)-esimos raices (parte esencial de divide & conquer)

es decir que los resultados de n = 2 se usarán en n = 4, las de n = 4 se usaran en n = 16... etc.


La parte de Divide & Conquer

A[0](x) = ax^3 + bx^2 + cx + dx
         1      2    3     4
coeficientes {a,b,c,d}
coeficientes pares = {b,d}
coeficientes impares = {a,c}


A[1](x) = bx^2 + d

A[2](x) = ax^3 + cx      <<<<<<<<<< impares!! datos de mas!

A[2](x) = x (ax^2 + c)
.
.
.
A[0](x) = (bx^2 + d) + (x(ax^2 + c))
.
.
.
cambio de variable:  = x^2
A[0](x) = (bu + d) + (x(au + c))

A[0](x) = A[1](x^2) + x*A[2](x^2)
 4 coef    2 coef        2 coef

*/
