#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int size;
    int *arr;
    int top;
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    bool isEmpty(){
        if(top==-1) return 1;
        else return 0;
    }
    void push(int value){
        if(top>=size-1) cout<<"stack is overflow "<<endl;
        else{top++;  arr[top]=value;   }    

    }
    bool isFull(){
        if(top==size-1) return 1;
        else return 0;
    }
    void pop(){
        if(top>=0) top--;
    }
    int topElement(){
        if(top>=0) return arr[top];
    } 

};
int main(){
    Stack s1=Stack(5);
    int i=0;
   while(!s1.isFull()){
    s1.push(i+=10);
   }
   while(!s1.isEmpty()){
    cout<<s1.topElement()<<" ";
    s1.pop();
   }
}
