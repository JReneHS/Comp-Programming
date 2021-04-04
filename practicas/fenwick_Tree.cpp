/*
 un Fenwick Tree es un arbol binario de indexion (Binary index Tree -> BIT pa los cuates)
utiliza el LSB para definir los rangos que se van a guardar en el

esta estructura de datos mejora el rendimiento de un Prefx Sum

e.i>>
  9  -> 1001 >> LSB(9) = 1
  8  -> 1000 >> LSB(8) = 8
  1  -> 0001 >> LSB(1) = 1
  10 -> 1010 >> LSB(10) = 2
  7  -> 0111 >> LSB(7) = 1

nos sirve ya que guarda las sumas de los rangos de bit
e.i

8 - 1000       |
7 - 0111 |     |
6 - 0110   |   |
5 - 0101 | |   |
4 - 0100     | |
3 - 0011 |   | |
2 - 0010   | | |
1 - 0001 | | | |
0 - 0000

Estos rangos estan determinados de A[i] hasta A[i - LSB(i) + 1]
por ejemplo 
  
Bit[4]

  A[4]
  A[4 - LSB(4) + 1] = A[4 - 4 + 1] = A[1]
  .: Bit[4] = A[1] + A[2] + A[3] + A[4]

Bit[5]

  A[5]
  A[5 - LSB(5) + 1] = A[5 - 1 + 1] = A[5]
  .: Bit[5] = A[5]


add(i,x) -> suma del elemento i al elemento x

sum(i) -> devuelve la suma hasta i

update en rango >> add(l,x) add(...)



*/

#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int LSB(int a) {
  return a & -a;
}

int main() { _io
    auto x = 20;
    while (x != -1) {
      bitset<5> bi(x);
      cout<<x<<" -> "<<bi<<" | LSB = "<<LSB(x)<<endl;
      x--;
    }
    return 0;
}

