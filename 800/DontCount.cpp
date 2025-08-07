#include<iostream>

// when do i finally stop appending x
// x -> x + x 
// argument is we should not go beyong 5 operation
// n*m = 25 
// n = 1
// m = 25 
// worst case where we have to append the most
// 1 -> 2 -> 4 -> 8 -> 16 -> 32
// new x will be basically appending the previous x


class Solution{
public:
    bool check(std::string s, std::string x){
        if (x.size() < s.size()){
            return false;
        }
        for(int i=0; i<x.size() - s.size() + 1; i++){
            if(x.substr(i, s.size()) == s){
                return true;
            }
        }
    return false;
    }
};

int main(){
    int nTest;
    std::cin>>nTest;

    Solution sol;

    while (nTest--)
    {
        int n, m;
        std::cin>>n>>m;
        std::string toBeModifiedStr;
        std::string targetStr;
        std::cin>>toBeModifiedStr>>targetStr;

        int count = -1;

        std::string x0 = toBeModifiedStr;
        std::string x1 = x0 + x0;
        std::string x2 = x1 + x1;
        std::string x3 = x2 + x2;
        std::string x4 = x3 + x3;
        std::string x5 = x4 + x4;

        if(sol.check(targetStr, x0)){
            count = 0;
        }else if(sol.check(targetStr, x1)){
            count = 1;
        }else if(sol.check(targetStr, x2)){
            count = 2;
        }else if(sol.check(targetStr, x3)){
            count = 3;
        }else if(sol.check(targetStr, x4)){
            count = 4;
        }else if(sol.check(targetStr, x5)){
            count = 5;
        }
        std::cout<<count<<std::endl;
    }
}