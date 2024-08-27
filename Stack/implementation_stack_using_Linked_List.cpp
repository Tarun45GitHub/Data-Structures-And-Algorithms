#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data){
        this->data=data;
        this->next=NULL;
    }
};
class Stack{
    public:
    Node* top;
    Stack(){
        top=NULL;
    }
    void disply(){
        if(top==NULL) cout<<"stack is underflow"<<endl;
        else{ 
            Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data;
            temp=temp->next;
            if(temp!=NULL) cout<<"->";
        }
        cout<<endl;
    }
    }
    void push(int data){
        Node* temp=new Node(data);
        if(!temp){
            cout<<"stack is overflow"<<endl;
            return;
        }
        temp->next=top;
        top=temp;
    }
    void pop(){
        if(top==NULL) cout<<"stack is underflow"<<endl;
        else{
            Node* temp=top;
            top=top->next;
            free(temp);
        }
    }
    void peak(){
        if(top==NULL) cout<<"stack is underflow"<<endl;
        else{
            cout<<top->data<<endl;
        }
    }
    void isempty(){
        if(top==NULL) cout<<"stack is empty"<<endl;
        else  cout<<"stack is not emoty"<<endl;
    }
    
};

int main(){
    Stack s1;
    s1.disply();
    s1.push(25);
    s1.push(20);
    s1.push(15);
    s1.peak();
    s1.disply();
    s1.pop();
    s1.peak();
    s1.disply();


}
