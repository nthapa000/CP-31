// Time complexity O(v^2)
// Space complexity O(v^2)

#include <iostream>
#include <vector>
using namespace std;

// Adjacency Matrix
// undirected unweighted graph

int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    // initialized with zero
    vector<vector<bool>> adjMat(vertex, vector<bool>(vertex,0));
    // if weighted take integer value 

    // we also need to know the weight
    int u,v;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;
    }

    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }
}
 