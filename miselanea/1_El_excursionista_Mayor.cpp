#include <iostream>
int main(int argc, char const *argv[]) {
  int a,b,c=0,d=0;
  std::cin>>a;
  while (d<a) {
    std::cin>>b;
    if(b>c){
      c=b;
    }
    d++;
  }
  std::cout<<c;
  return 0;
}
