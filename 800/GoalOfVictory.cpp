#include<iostream>

class Solution{
public:
    int solve(int *arr, int sizeArr){
        int sum = 0;
        for(int i=0; i<sizeArr; i++){
            sum += arr[i];
        }
        return -sum;
    }
};

int main(){
    int nTest;
    std::cin>>nTest;

    Solution sol;

    while(nTest--){
        int nTeam;
        std::cin>>nTeam;

        int efficiency[nTeam-1];
        for(int i=0; i<(nTeam-1); i++){
            std::cin>>efficiency[i];
        }

        int lastTeamEfficiency = sol.solve(efficiency, (nTeam - 1));
        std::cout<<lastTeamEfficiency<<std::endl;
    }
}