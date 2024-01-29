#include<bits\stdc++.h>
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
Node* InsertAtHead(Node* head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    return temp;
}
Node* InsertAtTail(Node* head,int data){
    //if insert in empty node
    if(head==NULL){
        Node* temp=new Node(data);
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    Node* temp=new Node(data);
    curr->next=temp;
    return head;
}
Node* InsertAtMiddle(Node* head,int data){
    Node* temp=head;
    Node* curr=head;
    while(temp->next!=NULL  && temp->next->next!=NULL){
        temp=temp->next->next;
        curr=curr->next;  
    }
    Node* hold=curr->next;
    curr->next=new Node(data);
    curr->next->next=hold;
    return head; 
}
Node* insertAt_Nth_position(Node* head,int data,int N){

}
void display(Node* head){
     Node* temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<" -> ";
       temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* head=new Node(5);
    Node*temp=new Node(6);
    head->next=temp;
    cout<<" Main Linked List : ";
    display(head);
    cout<<" after insert at head : ";
    head=InsertAtHead(head,3);
    display(head);
    cout<<" after insert at tail : ";
    head=InsertAtTail(head,7);
    display(head);
    cout<<"  after insert at middle : ";
    head=InsertAtMiddle(head,4);
    display(head);
}