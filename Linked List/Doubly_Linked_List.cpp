#include<iostream>
using namespace std;
class Node{
     public:
     Node* pre;
     Node* nex;
     int data;
     //constructor
     Node(int data){
        this->data=data;
        this->nex=NULL;
        this->pre=NULL;
     }
     //destructor
    ~Node(){

    }
};
void print(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->nex;
    }
    cout<<endl;
}
void insert_at_head(Node* &head,Node* &tail,int data){
    Node *temp=new Node(data);
   temp->nex=head;
   head->pre=temp;
   head=temp;

}
void insert_at_tail(Node* &head,Node*&tail,int data){
    Node* temp=new Node(data);
    temp->pre=tail;
    tail->nex=temp;
    tail=temp;
}
void insert_at_position(Node* &head,Node* &tail,int data,int p){
    Node *temp=new Node(data);
    if(p==1){
        temp->nex=head;
        head->pre=temp;
        head=temp;
        return;
    }
    
    Node* curr=head;
        int cnt=1;
    while(cnt<p-1){
        curr=curr->nex;
        cnt++;
    }
    if(curr->nex==NULL){
        temp->pre=tail;
        tail->nex=temp;
        tail=temp;
        return;
    }
    temp->nex=curr->nex;
    curr->nex->pre=temp;
    curr->nex=temp;
    temp->pre=curr; 
}
void Delete_from_position(Node* &head,Node* &tail,int p){
    if(head==NULL) return;
    if(p==1){
        Node* temp=head;
        temp->nex->pre=NULL;
        head=head->nex;
        delete temp;
        return;
    }
    else{
        Node* cur1=head;
        Node* cur2=NULL;
        int cnt=1;
        while(cnt<p){
            cur2=cur1;
            cur1=cur1->nex;
            cnt++;
        }
        if(cur1->nex==NULL){
            Node* temp=tail;
            cur2->nex=NULL;
            tail=cur2;
            delete temp;
            return;
        }
        Node* temp=cur1;
        cur1->nex->pre=cur2;
        cur2->nex=cur1->nex;
        delete temp;
    }
}
int main(){
    Node* n1= new Node(10);
    Node* head=n1;
    Node* tail=n1;
    print(head);
    cout<<"head "<<head->data<<" "<<"tail "<<tail->data<<endl;
    //insertation
    insert_at_head(head,tail,5);
    print(head);
    cout<<"head "<<head->data<<" "<<"tail "<<tail->data<<endl;

    insert_at_tail(head,tail,15);
    print(head);
    cout<<"head "<<head->data<<" "<<"tail "<<tail->data<<endl;

    insert_at_position(head,tail,3,4);
    print(head);
    cout<<"head "<<head->data<<" "<<"tail "<<tail->data<<endl;

    cout<<endl<<endl;
    
    //deletion
    Delete_from_position(head,tail,1);
    print(head);
    cout<<"head "<<head->data<<" "<<"tail "<<tail->data<<endl;

}
