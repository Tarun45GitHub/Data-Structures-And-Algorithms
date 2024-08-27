#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   bool t;
    for(int i=1;i<=n;i++){
        if(i%2==1) t=1;
        else t=0;
        for(int j=1;j<=i;j++){
            cout<<t<<" ";
            if(t==1) t=0;
            else t=1;
        }
        cout<<endl;
    }
}