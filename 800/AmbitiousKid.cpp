#include<iostream>
#include<climits>
#include<cmath>

class Solution{
public:
    int calcMinOp(int *arr, int arrSize){
        long long minOp = INT_MAX;
        for(int i=0; i<arrSize; i++){
            minOp = std::min(minOp,(long long) abs(arr[i])); 
        }
        
        return minOp;
    }
};

int main(){
    Solution sol;

    int n;
    std::cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        std::cin>>arr[i];
    }

    std::cout<<sol.calcMinOp(arr,n)<<std::endl;
}