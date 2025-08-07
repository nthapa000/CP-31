#include<iostream>

// identify the TC we are targeting so we can remove the things which we dont want 
// 1s = 10^8 ops 
// n <10 
//  we are fine till O(n^4)
// Argument -- If first no in the initial array is 1 then answer is YES, else answer is NO
// How 
// power to swap is not given to which no.?? 
//  i E (2,n-1)
//  basically we can't change the value of a1
// we dont have power to manipulate a1
// Target is to sort the array hence effectively first no. has to be 1 hence if initial no. is not 1 it is not possible to sort the array 
// Now other arg is if initial no. is 1 then we can always the array 
// since largest no. is always greater than left and right hence it is correct 

class Solution{
public:
    std::string isPossibleToSort(int *numArr, int sizeArr){
        if(numArr[0]==1){
            std::cout<<"YES"<<std::endl;
        }else{
            std::cout<<"NO"<<std::endl;
        }
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    while(nTest--){
        Solution sol;
        int sizeArr;
        std::cin>>sizeArr;

        int numArr[sizeArr];
        // input the given array
        for(int i=0; i<sizeArr; i++){
            std::cin>>numArr[i];
        }

        sol.isPossibleToSort(numArr, sizeArr);
    }
}