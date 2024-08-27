#include<iostream>
using namespace std;

void CheckEvenOrOdd(int n){
   if((n&1)==1) cout<<n<<" is odd number"<<endl;
    else cout<<n<<" is even number"<<endl;
}
int Find_ith_Bit(int n,int i){
    int m=(1<<i);
    if((n&m)==0) return 0;
    else return 1;
}
int Clear_ith_Bit(int n,int i){
    int m=(1<<(i-1));
    m=~m;
    return (n&m);
}
int Set_ith_Bit(int n,int i){
    int m=(1<<i);
    return (n|m);
}
int ClearLast_ith_Bit(int n,int i){
    n=(n>>i);
    n=(n<<i);
    return n;
}
int main(){
    int n;
    cin>>n;
    CheckEvenOrOdd(n);
   cout<< Find_ith_Bit(n,2)<<endl;
   cout<<Clear_ith_Bit(n,2)<<endl;
   cout<<Set_ith_Bit(n,3)<<endl;
   cout<<ClearLast_ith_Bit(n,2)<<endl;
}