#include <iostream>

class Solution{
public:
    void calcMove(int endPoint, int constraint){
        // do it in min no. of OP
        if(constraint > endPoint){
            std::cout<<1<<std::endl;
            std::cout<<endPoint<<std::endl;
            return;
        }
        else{
            int totalMove = 0;
            
            for(int i=endPoint; i>0; i--){
                if(i%constraint!=0){

                }
            }

        }
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        int endPoint , constraint;
        std::cin>>endPoint>>constraint;

        // Frog can jump some integer distance not divisible by k

        sol.calcMove(endPoint, constraint);
    }
}