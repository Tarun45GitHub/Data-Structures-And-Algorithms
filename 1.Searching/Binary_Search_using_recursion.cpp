#include<iostream>
using namespace std;
int binary_search(int ar[],int s,int e,int k){
   if(s<=e){
    int mid=(s+e)/2;
    if(ar[mid]==k) return mid;
    else if(ar[mid]<k)  binary_search(ar,mid+1,e,k);
    else binary_search(ar,s,mid-1,k);
   }
   else return -1;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
       cin>>ar[i];
    }
    int k;
    cin>>k;
    int s=0,e=n-1;
    cout<<binary_search(ar,s,e,k);

}
