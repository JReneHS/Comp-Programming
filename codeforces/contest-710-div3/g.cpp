#include <bits/stdc++.h>
#define endl "\n"
#define _io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

typedef long long int lli;

# define NO_OF_CHARS 256 
# define bool int 
  
char *removeDups(char str[]) 
{ 
    bool bin_hash[NO_OF_CHARS] = {0}; 
    int ip_ind = 0, res_ind = 0; 
    char temp; 
      
    while (*(str + ip_ind)) 
    { 
        temp = *(str + ip_ind); 
        if (bin_hash[temp] == 0) 
        { 
            bin_hash[temp] = 1; 
            *(str + res_ind) = *(str + ip_ind); 
            res_ind++; 
        } 
        ip_ind++; 
    } 
      
    *(str+res_ind) = '\0'; 
      
    return str; 
} 

int main() { _io
    int cases; cin>>cases;
    while(cases--) {
      string S;
      cin>>S;
      int len = S.length();
      char F[len+1];
    strcpy(F, S.c_str());
      cout<<removeDups(F)<<endl;

    }
    return 0;
}
