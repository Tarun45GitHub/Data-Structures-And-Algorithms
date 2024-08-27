#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>=0)
    {
        int m=n;
        while(m--)
        cout<<"*"<<" ";
        cout<<endl;
        n--;
    }
    
    return 0;
}