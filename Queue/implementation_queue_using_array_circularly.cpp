#include<iostream>
using namespace std;
class Queue{
    public:
    int size;
    int* arr;
    int rear;
    int front;
    Queue(int size){
        this->size=size;
        arr=new int[size];
        rear=front=-1;
    }
    void display(){
        if(rear==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(rear>=front){
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            return;
        }
        for(int i=front;i<size;i++){
            cout<<arr[i]<<" ";
        }
        for(int i=0;i<rear;i++){
            cout<<arr[i]<<" ";
        } 
        return;
    }
    void enQueue(int data){
        if((rear+1)%size==front){
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1) front=0;
        rear=(rear+1)%size;
        arr[rear]=data;
    }
    void deQueue(){
        if(rear==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        if(rear==front) rear=front=-1;
        front=(front+1)%size;
    }
};
int main(){
    Queue q(5);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);
    q.enQueue(9); 
    //q.enQueue(1);  
    
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();
    //q.deQueue();

    q.enQueue(10);
    q.enQueue(16);
    q.enQueue(17);
    q.enQueue(18);
    q.enQueue(19); 
    q.display();



}