#include<iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int size;
    int rear,front;
    int* arr;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        rear=front=0;
    }
    void display(){
        if(rear==front){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<"->";
        }
        cout<<"NULL"<<endl;
        return;
    }
    void enQueue(int n){
        if(rear==(size)){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[rear]=n;
        rear++;
    }
    void deQueue(){                           // Time complexcity O(n)
        if(front==rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<rear;i++){        
            arr[i]=arr[i+1];
        }
        rear--;
        return;
    }
    
};
int main(){
    Queue q(3);
    q.enQueue(12);
    q.enQueue(15);
    q.enQueue(18);
    //q.deQueue();
    q.display();

}