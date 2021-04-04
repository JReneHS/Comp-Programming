#include <algorithm>
#include <iostream>
#include <vector>
#include <array>


using namespace std;

void add_3_to_this_number(int& number) {
    number +=3;
}

//Sirven para evitar copiar todo el contenedor
int sum_of_all_numbers(vector<int>& nums) {
    int sum{0};
    for(auto x : nums) {
        sum += x;
    }
    return sum;
}
//Si no quieres que modifique el valor, le pones const
inline int sum_first_two_elements(const vector<int>& nums) {
    return nums[0] + nums[1];
}

int main(){
    //Las referencias son punteros a variables para evitar copiarlas.
    int num {0};
    cout<<num<<endl;
    add_3_to_this_number(num);
    cout<<num<<endl;

    vector<int> numbers{1,2,3,4,5,6,7,8,9,11};
    auto sum = sum_of_all_numbers(numbers);
    cout<<sum<<endl;
    return 0;
}


