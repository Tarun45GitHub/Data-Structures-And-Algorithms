#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int ar[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(ar[j]>ar[j+1])
            swap(ar[j],ar[j+1]);
        }
    }

}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    BubbleSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
//Time Complexity O(n^2);
//Space Complexity O(1);