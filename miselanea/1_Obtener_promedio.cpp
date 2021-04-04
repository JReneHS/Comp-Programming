#include <iostream>
#include <iomanip>
int main(int argc, char const *argv[]) {
  int a,b;
  float c=0.0;
  std::cin>>a;
  for (size_t i = 0; i < a; i++) {
    std::cin>>b;
    c+=b;
  }
  float pi=3.141516;
  std::cout<<std::setprecision(3)<<(float)(c/(float)a);
  return 0;
}
