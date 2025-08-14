#include <iostream>

class Solution{
public:
    void isPossible(int n, int k){
        if(n%2!=0 && k%2==0){
            std::cout<<"NO"<<std::endl;
        }else{
            std::cout<<"YES"<<std::endl;
        }
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        long long n,k;
        std::cin>>n>>k;

        sol.isPossible(n,k);
    }
}