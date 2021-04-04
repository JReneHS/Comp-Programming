#include <bits/stdc++.h>
//int E[1000001] , S[1000001] , F[1000001];
using namespace std;

int main() {
    string brackets; cin>>brackets;
    auto maxi = 0;
    int aux;
    stack<int> stk;
    int size = brackets.size();
    vector<int> E(size + 1,0);
    vector<int> S(size + 1,0);
    vector<int> F(size + 1,0);
    for(int i = 0; i < size;i++) {
        char br = brackets[i];
        if(br == '(')
            stk.push(i);
        else {
            if(stk.empty())
                S[i] = E[i] = -1;
            else {
                aux = stk.top();
                stk.pop();
                S[i] = E[i] = aux;
                if(aux > 0 && brackets[aux-1] == ')' && S[aux-1] >= 0)
                    E[i] = E[aux - 1];

                int l = i - E[i] + 1;
                F[l]++;
                maxi = max(maxi , l);
            }
        }
    }
    F[0] = 1;
    cout<<maxi<<" "<<F[maxi]<<endl;
    return 0;
}

