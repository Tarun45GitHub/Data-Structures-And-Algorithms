#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;                                //Number of Vertex or Node and Number of edges
    cin>>n>>m;
    int adj[n+1][n+1]={0};                          //TO representation in matrix is called adjacency matrix
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;                        //for directed Graph have to do only one part
        adj[y][x]=1;
    }
    //for print adjency matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

//space compexity =O(n+1*n+1)
//Time compexity = O(N^2)