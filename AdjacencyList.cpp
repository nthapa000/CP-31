// array of vectors 
// TC: O(V + 2*E) :  worst case E = V^2 , when we got the complete graph O(V + V^2 ) = O(V^2)
// SC: O(V + E) : worst case E = V^2 , when we got the complete graph O(V + V^2 ) = O(V^2)

#include <iostream>
#include <vector>

using namespace std;

// undirected graph no weight 
int main(){
    int vertex, edges;
    cin>>vertex>>edges;

    // to store weight we will use pair<int,int> instead of int
    vector<int> AdjList[vertex];

    // take weight
    int u,v;
    for(int i=0; i<edges; i++){
        cin>>u>>v;
        // make_pair(v,weight);
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }    

    // Print the list 

    for(int i=0; i<vertex; i++){
        cout<<i<<" -> ";
        for(int j=0; j<AdjList[i].size(); j++){
            // .first   .second
            cout<<AdjList[i][j]<<" ";
        }
        
        cout<<endl;
    }
}

// Comparision 

// adding edge
// Adj Matrix  :  const time 
// Adj list : const time 

// remove edge
// Adj Matrix : O(1)
// Adj list : O(V) worst case every vertex can have v-1 edges

// edge exist 
// Adj Mat : O(1)
// adj List : O(V)

// remove and edge exist or not problem can be done in O(1) for adj list using unordered_map

// Space complexity
// Adj mat : O(v^2)
// Adj list : O(v+e) --> O(v^2)

// dense graph prefer : Adj matrix 
// sparse graph prefer : Adj list --> for minimizing SC

