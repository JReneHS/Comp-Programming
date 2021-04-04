#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string,string> phoneBook;
    int c; cin>>c;
    while(c--) {
        string name, number;
        cin>>name>>number;
        phoneBook[name] = number;
        }
    string comp;
    while(cin>>comp) {
        if(phoneBook.find(comp) == phoneBook.end()){
            cout<<"Not found"<<endl;
        } else {
            cout<<phoneBook.find(comp)->first<<"="<<phoneBook.find(comp)->second<<endl;
        }
    } 
    return 0;
}


