#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* constructLLfromArray(vector< int> &arr){
    int n=arr.size();
    Node* head=new Node(arr[0]);
    Node* tail=head;
    for(int i=1; i<n ;i++ ){
        Node* temp=new Node(arr[i]);
        tail->next=temp;
        tail=temp;
    }
    return head;
}
void display(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<" -> ";
       temp=temp->next;
    }
    
}
int main(){
    Node* temp=new Node(5);
    vector<int>arr={5,4,6,1,3,7};
    Node* head=constructLLfromArray(arr);
    display(head);
}