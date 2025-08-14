#include <iostream>

class Solution{
public:
    void calcMove(int x1, int y1, int x2, int y2){
        int totalMoves = -1;
        int newX1Pos;
        if(y2<y1){
            std::cout<<totalMoves<<std::endl;
            return;
        }else{
            totalMoves = y2-y1;
            newX1Pos = x1 + totalMoves;
            if(newX1Pos<x2){
                std::cout<<"-1"<<std::endl;
                return;
            }else{
                totalMoves += newX1Pos - x2;
            }
            std::cout<<totalMoves<<std::endl;
        }
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;

        sol.calcMove(a,b,c,d);
    }
}