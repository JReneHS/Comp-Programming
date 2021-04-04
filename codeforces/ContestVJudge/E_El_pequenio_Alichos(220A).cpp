#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    auto swaps = 0;
    int pos[2];
    int i = 0;
    vector<int> arr(n+2);
    arr[0] = 0;
    arr[n+1] = INT_MAX;
    cin>>arr[1];
    for(int x = 2; x<=n;x++){
        cin>>arr[x];
        if(arr[x] < arr[x-1]){
            swaps++;
            if(i <= 1){
                pos[i]=x;
                i++;
            }
        }
    }
    int aux;
    if(swaps > 2){cout<<"NO"<<endl;}
    else if(swaps < 2){cout<<"YES"<<endl;}
    else {
        swaps = 0;
        if(pos[0] == (pos[1]-1)){
            aux = arr[pos[1]];
            arr[pos[1]] = arr[pos[0]-1];
            arr[pos[0]-1] = aux;
        } else {
            aux = arr[pos[1]];
            arr[pos[0]] = arr[pos[1]];

        }
    }

    return 0;
}


