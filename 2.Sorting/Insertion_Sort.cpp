#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int ar[],int n){
for(int i=1;i<n;i++){
    int cur=ar[i];
    int j=i-1;
    while(ar[j]>cur&&j>=0){
        ar[j+1]=ar[j];
        j--;
    }
    ar[j+1]=cur;
}
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    InsertionSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
//Time Complexity O(n^2);
//Space Complexty O(1);