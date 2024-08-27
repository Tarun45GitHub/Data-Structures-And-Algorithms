#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        size=0;
        arr[0]=-1;
    }
    
    void insert(int value){
        //1.add value in arr
        size++;
        arr[size]=value;
        int index=size;
        //2.propagate new node to its correct position
        while(index>1){
            int parent=(index/2);

            // //for max heap
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }

            // // for min heap
            // if(arr[parent]>arr[index]){
            //     swap(arr[parent],arr[index]);
            //     index=parent;
            // }
            else return;
        }
        //T.C=O(logn)
    }

    void deletion(){

        if(size==0) cout<<"nothing to delete";

        //last node take as root
        arr[1]=arr[size];
        //delete last node
        size--;
        //take root node its correct position
        int index=1;
        while(index<size){
            int left=index*2;
            int right=index*2+1;

            if(left<size&&arr[left]>arr[index]){
                swap(arr[left],arr[index]);
                index=left;
            }

            else if(right<size&& arr[right]>arr[index]){
                swap(arr[right],arr[index]);
                index=right;
            }
            else return;
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(40);
    h.insert(30);
    h.insert(70);
    h.print();
    h.deletion();
    h.deletion();
    h.print();
    return 0;
}