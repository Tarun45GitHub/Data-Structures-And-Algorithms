#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int ar[],int n){
     for(int i=0;i<n-1;i++){
        int mindx=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[mindx])
            mindx=j;
        }
        if(mindx!=i)
        swap(ar[i],ar[mindx]);
        }
    
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    SelectionSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}
//Time Complexity O(n^2)
// Space Complexity O(1)