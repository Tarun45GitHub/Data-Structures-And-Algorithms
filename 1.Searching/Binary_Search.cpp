#include<iostream>
using namespace std;
int BinarySearch(int ar[],int n,int k){
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(ar[mid]==k) return mid;
        else if(ar[mid]>k) e=mid-1;
        else if(ar[mid]<k) s=mid+1;
    }
    return -1;
}
int main(){
    int n;//size of array
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int k;
    cin>>k;//searching element
    cout<<BinarySearch(ar,n,k);

}
//Time complexity =O(log n)
//space Complexity =O(1)