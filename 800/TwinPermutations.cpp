#include <iostream>

class Solution{
public:
    void solve(int *aPer, int lenPer){
        for(int i=0; i<lenPer; i++){
            int currB = lenPer + 1 - aPer[i];
            std::cout<<currB<<" ";
        }
        std::cout<<std::endl;
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        // our basic goal is to map the largest no. of the given permuation (n) and similarly the smallest no. of permutation 1 map to the n hence by these sum of corresponding no. always satisfy condition

        int lenPer;
        std::cin>>lenPer;

        int aPer[lenPer];
        for(int i=0; i<lenPer; i++){
            std::cin>>aPer[i];
        }

        sol.solve(aPer, lenPer);
    }
}