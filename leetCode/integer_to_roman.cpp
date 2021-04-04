#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};       
    int integer[] =  {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string ans="";
    int num;
    cin>>num;
    for(int i=0; num>0; i++) {
        while(num >= integer[i]) {
            ans= ans+ roman[i];
            num= num- integer[i];
        }
    }
    cout<<ans;
    return 0;
}
