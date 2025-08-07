#include<iostream>

class Solution{
public:
    std::string solve(int *arr,int n){
        if(n==2){
            return "YES";
        }
        // we can have only two no. in the array 
        // if no. of array is odd then one no. will be one greater than other and in case of even size array we have to have equal no. of elements sequence does matter

        int firstNum = arr[0];
        int freq1=0;
        int secondNum = -1;
        int freq2=0;
        // incase we dont have second number then answer will be yes 

        for(int i=0; i<n; i++){
            int currNum = arr[i];
            
            if(currNum != firstNum ){
                if(secondNum==-1){
                    secondNum = currNum;
                }
            }
            if(currNum == firstNum){
                freq1++;
            }else if(currNum != firstNum && currNum == secondNum){
                freq2++;
            }else{
                return "NO";
            }
        }

        if(secondNum==-1){
            return "YES";
        }

        int diff = std::abs(freq1 - freq2);
        if(n%2==0 && diff==0){
            return "YES";
        }else if(n%2!=0 && diff==1){
            return "YES";
        }else{
            return "NO";
        }
    }
};

int main(){
    Solution sol;
    int nTest;
    std::cin>>nTest;
    while(nTest--){
        int n;
        std::cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            std::cin>>arr[i];
        }

        std::cout<<sol.solve(arr,n)<<std::endl;
    }
}