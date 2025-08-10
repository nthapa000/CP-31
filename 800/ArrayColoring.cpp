#include <iostream>

class Solution{
public:
    std::string canColorArr(int *arr, int lenArr){
        int countEven=0;
        int countOdd=0;

        for(int i=0; i<lenArr; i++){
            if(arr[i]%2==0){
                countEven++;
            }else{
                countOdd++;
            }
        }

        if(lenArr == 1){
            return "NO";
        }
        if(lenArr == 2 && countEven==1 && countOdd==1){
            return "NO";
        }
        if(countOdd %2!=0){
            return "NO";
        }
        return "YES";
    }
};

int main(){
    int nTest;
    std::cin>>nTest;
    
    Solution sol;

    while(nTest--){
        int lenArr;
        std::cin>>lenArr;

        int arr[lenArr];
        for(int i=0; i<lenArr; i++){
            std::cin>>arr[i];
        }

        std::cout<<sol.canColorArr(arr,lenArr)<<std::endl;
    }
}