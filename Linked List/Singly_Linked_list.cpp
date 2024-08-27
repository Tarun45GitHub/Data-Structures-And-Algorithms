#include<iostream>
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
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_at_head(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insert_at_tail(Node* &head,int data){
    Node* temp=new Node(data);
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
}
void insert_at_position(Node* &head,int data,int p){
    Node* temp=new Node(data);
    if(p==1){
        temp->next=head;
        head=temp;
        return;
    }
    else{
        Node* curr=head;
        int cnt=1;
        while(cnt<p-1){
            curr=curr->next;
            cnt++;
        }
        temp->next=curr->next;
        curr->next=temp;
    }
}
void delete_from_position(Node* &head,int p){
    if(p==1){
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    else{
        
    }
}
int main(){
    Node* n1=new Node(22);
    Node* head=n1;
    print(head);

    insert_at_head(head,20);
    print(head);

    insert_at_tail(head,15);
    print(head);

    insert_at_position(head,10,4);
    print(head);
}