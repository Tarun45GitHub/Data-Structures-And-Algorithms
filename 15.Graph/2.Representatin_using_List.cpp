#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;                                     //numner of node and edge
    cin>>n>>m;                                   //input
    vector<int>adj[n+1];                         //adjacency List for store nabghournode
    for(int i=0;i<m;i++){
        int x,y;                                 //connectd node in a edge
        cin>>x>>y;
        adj[x].push_back(y);                      //for directed graph one line need
        adj[y].push_back(x);
    }
    for(int i=0;i<n+1;i++){                     //print the adjacency list;
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }


}

//space complexity=O(n+1*n+1)
//Time complexity =O(2*m)