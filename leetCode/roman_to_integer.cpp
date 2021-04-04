#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int num = 0;
    if(s.empty()) return 0;
    for(auto i = 0; i < s.length() ; i++) {
        x = s[i];
        switch (x)
        {
        case 'M' : num +=1000; break;
        case 'D' : num +=500; break;
        case 'C' : 
            if (i < s.length() - 1 && s[i+1]=='M')
            {
                num += 900;
                i++;
            }
            else if (i < s.length() - 1 && s[i+1]=='D')
            {
                num += 400;
                i++;
            }
            else
            {
                num+=100;
            }
            break;
        case 'L' : num+= 50; break;
        case 'X' : 
            if (i < s.length() - 1 && s[i+1]=='C')
            {
                num += 90;
                i++;
            }
            else if (i < s.length() - 1 && s[i+1]=='L')
            {
                num += 40;
                i++;
            }
            else
            {
                num+=10;
            }
            break;
        case 'V' : num += 5; break;
        case 'I' : 
            if (i < s.length() - 1 && s[i+1]=='X')
            {
                num += 9;
                i++;
            }
            else if (i < s.length() - 1 && s[i+1]=='V')
            {
                num += 4;
                i++;
            }
            else
            {
                num+=1;
            }
            break;
        }
    }
    
    return 0;
}
