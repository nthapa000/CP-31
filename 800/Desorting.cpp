#include <iostream>
#include <climits>

class Solution{
public:
    bool isSorted(long long* arr, int lenArr){
        for(int i=0; i<lenArr-1; i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }

    long long minOp(long long*arr, int lenArr){
        long long minDiff = INT_MAX;
        for(int i=0; i<lenArr-1; i++){
            int currDiff = arr[i+1] - arr[i];
            if(currDiff < minDiff){
                minDiff = currDiff;
            }
        }
        return minDiff/2+1;
    }
};

// 1 test = 1sec = 10^8 ops
// 1 test = 100 testcase
// op/testcase = 10^8 / 100 = 10^6 

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        int lenArr;
        std::cin>>lenArr;

        long long arr[lenArr];

        for(int i=0; i<lenArr; i++){
            std::cin>>arr[i];
        }

        if(!sol.isSorted(arr,lenArr)){
            std::cout<<0<<std::endl;
        }else{
            std::cout<<sol.minOp(arr,lenArr)<<std::endl;
        }
    }
}