#include <iostream>

class Solution{
public:
    int minOp(int *arr, int lenArr){
        int sum = 0;
        int prod = 1;
        int positiveOne = 0;
        int negativeOne = 0;

        for(int i=0; i<lenArr; i++){
            sum += arr[i];
            prod *= arr[i];

            if(arr[i]==1){
                positiveOne++;
            }else{
                negativeOne++;
            }
        }

        if(sum>0 && prod==1){
            return 0;
        }

        int totalOp = 0;
        if(sum<0 && prod<1){
            // making sum positive
            int opReq=0;
            if(lenArr%2==0){
                opReq = (negativeOne - positiveOne)/2;           
            }else{
                opReq = (negativeOne - positiveOne)/2 + 1;
            }
            totalOp += opReq;
            // std::cout<<totalOp<<"   ";
            positiveOne += opReq;
            negativeOne -= opReq;

            // checking if product is fine or not
            if(negativeOne %2 != 0){
                totalOp++;
                positiveOne++;
                negativeOne--;
            }
            // std::cout<<totalOp<<"   ";
            return totalOp;
        }

        if(sum<0){
            // making sum positive
            int opReq=0;
            if(lenArr%2==0){
                opReq = (negativeOne - positiveOne)/2;           
            }else{
                opReq = (negativeOne - positiveOne)/2 + 1;
            }
            totalOp += opReq;
            positiveOne += opReq;
            negativeOne -= opReq;

            // checking if product is fine or not
            if(negativeOne %2 != 0){
                totalOp++;
            }
            return totalOp;
        }

        if(prod<1){
            if(negativeOne %2 != 0){
                totalOp++;
            }
            return totalOp;
        }
        return totalOp;
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
            // either -1 or +1
            std::cin>>arr[i];
        }

        std::cout<<sol.minOp(arr, lenArr)<<std::endl;
    }
}