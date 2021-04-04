#include <bits/stdc++.h>

using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector<int> nums;
    char ch;
    int i;
    while(ss>>i){
        nums.push_back(i);
        ss>>ch;
    }
    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
