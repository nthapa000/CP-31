#include <iostream>
#include <vector>

class Solution{
public:
    void solve(long long *seq, int n){
        std::vector<long long> dup;
        dup.push_back(seq[0]);
        for(int i=1; i<n; i++){
            if(seq[i]>=seq[i-1]){
                dup.push_back(seq[i]);
            }else{
                dup.push_back(seq[i]);
                dup.push_back(seq[i]);
            }
        }

        std::cout<<dup.size()<<std::endl;

        for(auto it:dup){
            std::cout<<it<<" ";
        }
        std::cout<<std::endl;
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        int n;
        std::cin>>n;

        long long seq[n];
        for(int i=0;i<n;i++){
            std::cin>>seq[i];
        }

        sol.solve(seq,n);
    }
}