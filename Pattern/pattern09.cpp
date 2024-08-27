#include<iostream>
using namespace std;
int main(){
    int n,m=0;
    cin>>n;
    int p=2*n;
  for(int i=0;i<p;i++){          
        if(m<n){
            for(int j=1;j<=(n-m+1);j++)  cout<<" ";
            for(int j=1;j<=(2*m)-1;j++)  cout<<"*";
            for(int j=1;j<=(n-m+1);j++)  cout<<" ";
            cout<<endl;
            m++;
        }
        else{
            for(int j=1;j<=(m-n+1);j++)  cout<<" ";
            for(int j=1;j<=(2*n)-1;j++)  cout<<"*";
            for(int j=1;j<=(m-n+1);j++)  cout<<" ";
            cout<<endl;
            n--;
        }
    }


}