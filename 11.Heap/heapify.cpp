#include<iostream>
using namespace std;

//n/2+1 to nth node are leaf node that are already heap

void heapify(int arr[],int size,int index){
    int largest=index;
    int left=2*index;
    int right=2*index +1;

    if(left<size && arr[largest]<arr[left])  largest=left;
    else if(right<size && arr[largest]<arr[right]) largest=right;

    if(largest!=index) {
        swap(arr[index],arr[largest]);
        heapify(arr,size,largest);
    }
}

int main(){
    int arr[6]={-1,20,25,85,60,30};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}