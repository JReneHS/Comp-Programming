#include <iostream>
int main(int argc, char const *argv[]) {
  int a,b;
  std::cin>>a>>b;
  if(a==b){
    std::cout<<"iguales";
  }else{
    a>b?std::cout<<"mayor":std::cout<<"menor";
  }
  return 0;
}
