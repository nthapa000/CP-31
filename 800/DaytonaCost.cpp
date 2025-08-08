#include <iostream>

class Solution{
public:
    std::string isSubsegment(int n, int k, int *arr){
        for(int i=0 ;i<n; i++){
            if(arr[i]==k){
                return "YES";
            }
        }
        return "NO";
    }
};

int main(){
    int nTest;
    std::cin>>nTest;

    Solution sol;

    while(nTest--){
        int n,k;
        std::cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }

        std::cout<<sol.isSubsegment(n,k, arr)<<std::endl;
    }
}