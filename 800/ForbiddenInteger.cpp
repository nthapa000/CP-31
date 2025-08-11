#include <iostream>

class Solution{
public:
    void isPossible(int n, int k, int x){
        if(x!=1){
            std::cout<<"YES"<<std::endl;
            std::cout<<n<<std::endl;
            for(int i=0;i<n;i++){
                std::cout<<1<<" ";
            }
            std::cout<<std::endl;
            return;
        }else{
            if(k == 1 ){
                std::cout<<"NO"<<std::endl;
                return;
            }
            if(k == 2 && (n%2!=0)){
                std::cout<<"NO"<<std::endl;
                return;
            }

            if(n%2==0){
                std::cout<<"YES"<<std::endl;
                std::cout<<n/2<<std::endl;
                for(int i=0; i<n/2; i++){
                    std::cout<<2<<" ";
                }
                std::cout<<std::endl;
            }
            else{
                std::cout<<"YES"<<std::endl;
                std::cout<<n/2<<std::endl;
                std::cout<<3<<" ";
                for(int i=0; i<(n/2 - 1); i++ ){
                    std::cout<<2<<" ";
                }
                std::cout<<std::endl;
            }
        }
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        int n, k, x;
        // we have to make n 
        // we have acess to all no. from 1 to k , except no. x
        std::cin>>n>>k>>x;

        sol.isPossible(n,k,x);
    }
}