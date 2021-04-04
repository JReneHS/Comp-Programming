#include <bits/stdc++.h>

#define endl "\n"
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

int main() { _
    vector<int> plants;
    priority_queue<pair<int,int>> heap;
    int n,p,maxsp;
    pair<int,int> aux;
    auto ss = 0;
    auto times = 0;
    bool eats = false;

    cin>>n;

    while(--n){
        cin>>p;
        aux.first = -p;
        aux.second = ss;
        plants.push_back(p);
        heap.push(aux);
        ss++;
    }
    do {
        ss = 0;
        eats = false;
        maxsp = plants.size();
        while(heap.empty() == false) {
            aux = heap.top();
            heap.pop();
            if(-aux.second == maxsp) continue;
//cuando eliminas un elemento los indices cambian
            if(plants[-aux.second+1] < plants[-aux.second]) {
                plants[plants.begin()-aux.second+1] = 0;
                eats = true;
            }
        }
        for(auto i=plants.begin(); i!=plants.end(); i++){
            if(plants[i] == 0)plants.erase(i);
            i--;
        }
        for(auto &x:plants){
            aux.first = x;
            aux.second = ss;
            ss++;
        }
    if(eats)times++;
    }while(eats);
    cout<<times;
    return 0;
}

