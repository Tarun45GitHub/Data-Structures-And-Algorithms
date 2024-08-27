#include<bits/stdc++.h>
using namespace std;
vector<int> fun2(vector<int>v){
    int n=v.size();
    if(n<=2) return v;
    else{
        vector<int>temp;
        for(int i=0;i<n/2;i++){
            int m=v[i]+v[n-1-i];
            temp.push_back(m);
        }
        if(n%2!=0) temp.push_back(v[(n/2)]);
        return fun2(temp);
    }
}
vector<int> fun1(string s1,string s2){
    string s;
    s=s1+s2;
    vector<int>ans;
    for(int i=0;i<s.length();i++){
        if(s[i]!='*'){
            char c1=s[i];
            
        int num=1;
        for(int j=i+1;j<s.length();j++){
            if(s[j]==c1){
                s[j]='*';
                num++;
            }
        }
        
        ans.push_back(num);
        }
        else continue;
    }
    return ans;
}
void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
   vector<int>v1=fun1(s1,s2);
//    print(v1);
   vector<int>v2=fun2(v1);
   print(v2);
   
    return 0;
}