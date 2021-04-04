#include <iostream>
int main(int argc, char const *argv[]) {
	int a,b;
	std::cin>>a>>b;
	if((a+b)<0){
		std::cout<<(a+b)*-1;
	}
	else{
		std::cout<<a+b;
	}
	return 0;
}
