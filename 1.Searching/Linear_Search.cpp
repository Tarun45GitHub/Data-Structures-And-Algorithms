#include<iostream>
using namespace std;
int LinearSearch(int ar[],int n,int k){
    for(int i=0;i<n;i++){
        if(ar[i]==k) return i;
    }
    return -1;//element is not preasent
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
    cout<<LinearSearch(ar,n,k);

}
//time complexity==O(n);
//space complexity==O(1)