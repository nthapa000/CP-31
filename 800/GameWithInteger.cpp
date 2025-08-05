#include<iostream>

class Solution{
public:
    std::string declareWinner(int n){
        if(n%3==0){
            return "Second";
        }
        if(n%3==1 || n%3==2){
            return "First";
        }
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    while(nTest--){
        int n;
        std::cin>>n;
        Solution sol;
        std::cout<<sol.declareWinner(n)<<std::endl;
    }
}
