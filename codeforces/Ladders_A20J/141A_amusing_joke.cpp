#include <bits/stdc++.h>

using namespace std;

void merge(vector<char> &arr,int lef,int rig, int mid) {
    int i,j,k,n1,n2;
    n1 = mid-lef+1;
    n2 = rig-mid;
    vector<char> auxL(n1);
    vector<char> auxR(n2);
    for(i = 0; i < n1;++i) auxL[i] = arr[lef+i];
    for(j = 0; j < n2;++j) auxR[j] = arr[mid+1+j];
    i = j = 0;
    k = lef;
    while(i < n1 && j < n2) {
        if(auxL[i] <= auxR[j]) {
            arr[k] = auxL[i];
            i++;
        } else {
            arr[k] = auxR[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        arr[k] = auxL[i];
        k++;
        i++;
    }
    while(j < n2) {
        arr[k] = auxR[j];
        k++;
        j++;
    }
}

void mergeSort(vector<char> &arr,int lef,int rig){
    if(lef < rig) {
        auto mid = (lef + rig)/2;
        mergeSort(arr, lef,mid);
        mergeSort(arr, mid+1,rig);
        merge(arr,lef,rig,mid);

    }

}


int main() {
    string a,b,c;cin>>a>>b>>c;

    auto presize = a.size() + b.size();

    if(presize != c.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    vector<char> str1;
    vector<char> str2;

    for(auto x:c)str2.push_back(x);
    for(auto x:a)str1.push_back(x);
    for(auto x:b)str1.push_back(x);
    mergeSort(str1,0,presize-1);
    mergeSort(str2,0,presize-1);
    string stri1(str1.begin(),str1.end());
    string stri2(str2.begin(),str2.end());
    int equals = stri1.compare(stri2);
    if(equals == 0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

