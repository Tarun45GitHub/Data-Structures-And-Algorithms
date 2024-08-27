#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
class Queue{
    public:
    Node* rear;
    Node* front;
    Queue(){
        front=rear=NULL;
    }
    void diplay(){
        if(rear==front) cout<<"queue is empty"<<endl;
        
    }
    void enqueue(int data){
        Node* temp=new Node(data);
        if(front==NULL)
        rear=front=temp;
        rear->next=temp;
        rear=temp;
    }
    void dequeue(){
        if(front==NULL) cout<<"Queue is empty"<<endl;
        cout<<front->data<<endl;
        front=front->next;
    }
};
int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(8);
    q.dequeue();

}
