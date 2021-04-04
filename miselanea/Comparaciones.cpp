#include <iostream>
int main(int argc, char const *argv[]) {
  int a,b;
  std::cin>>a>>b;
  if(a>=b){
    if(a==b){
      std::cout<<"iguales";
    }else{
      std::cout<<"mayor";
    }
  }
  else{
    std::cout<<"menor";
  }
  return 0;
}
