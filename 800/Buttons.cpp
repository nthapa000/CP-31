#include <iostream>

class Solution{
public:
    std::string declareWinner(long long anna, long long katie, long long both){
        // First : Anna
        // Second : Katie
        long long totAnna = 0;
        if(both%2!=0){
            totAnna = both/2 + 1 + anna; 
        }else{
            totAnna = both/2 + anna;
        }

        long long totKatie = katie + both/2;

        if(totKatie >= totAnna ){
            return "Second";
        }else{
            return "First";
        }   
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;


    while(nTest--){
        // Anna first Turn
        long long nButAnna, nButKatie, nButBoth;
        std::cin>>nButAnna>>nButKatie>>nButBoth;

        // Each button can be pressed once
        std::cout<<sol.declareWinner(nButAnna, nButKatie, nButBoth)<<std::endl;
    }
}