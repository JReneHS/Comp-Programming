#include <iostream>
int main(int argc, char const *argv[]) {
  int a,b,c,d=0;
  std::cin>>a>>b;
  for (size_t i = 0;i<a; i++) {
    std::cin>>c;
    if(c==b){
      d++;
    }
  }
  std::cout<<d;
  return 0;
}
