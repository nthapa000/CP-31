#include <iostream>

class Solution{
public:
    int calculatePoints(char targetBoard[10][10]){
        int totalPoints = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(targetBoard[i][j]=='X'){
                    if(i==0 || j==0 || i==9 || j==9){
                        totalPoints += 1;
                    }else if(i==1 || j==1 || i==8 || j==8){
                        totalPoints += 2;
                    }else if(i==2 || j==2 || i==7 || j==7){
                        totalPoints += 3;
                    }else if(i==3 || j==3 || i==6 || j==6){
                        totalPoints += 4;
                    }else {
                        totalPoints += 5;
                    }
                }
            }
        }
        return totalPoints;
    }
};

int main(){
    Solution sol;
    int nTest;
    std::cin>>nTest;

    while(nTest--){
        char targetBoard[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                std::cin>>targetBoard[i][j];
            }
        }
        std::cout<<sol.calculatePoints(targetBoard)<<std::endl;
    }
}