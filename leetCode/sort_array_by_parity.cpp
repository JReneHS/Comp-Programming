#include <bits/stdc++.h>

class Solution {
public:
    void merge(vector<int> &arr,int lef,int rig, int mid) {

    int i,j,k,n1,n2;

    n1 = mid-lef+1;
    n2 = rig-mid;

    vector<int> auxL(n1);
    vector<int> auxR(n2);

    for(i = 0; i < n1;++i) auxL[i] = arr[lef+i];
    for(j = 0; j < n2;++j) auxR[j] = arr[mid+1+j];

    i = j = 0;
    k = lef;

    while(i < n1 && j < n2) {
        if(auxR[j]&1 == 1) {
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

void mergeSort(vector<int> &arr,int lef,int rig){
    if(lef < rig) {
        auto mid = (lef + rig)/2;
        mergeSort(arr, lef,mid);
        mergeSort(arr, mid+1,rig);
        merge(arr,lef,rig,mid);

    }

}
    vector<int> sortArrayByParity(vector<int>& A) {
        mergeSort(A,0,A.size()-1);
        return A;
    }
};
