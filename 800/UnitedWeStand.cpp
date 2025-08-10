#include <iostream>
#include <algorithm>

class Solution{
public:
    void solve(long long *arr,int arrSize){
        int notUnique = -1;
        long long ref = arr[0];
        for(int i=0; i<arrSize;i++){
            if(arr[i]!= ref){
                notUnique = 1;
            }
        }

        if(notUnique == -1){
            std::cout<<-1<<std::endl;
            return ;
        }

        std::sort(arr,arr+arrSize);
        int lastEle = arr[arrSize-1];
        
        int count = 0;
        while(arr[count]!=lastEle){
            // std::cout<<arr[count]<<" ";
            count++;
        }
        std::cout<<count<<" "<<arrSize-count;
        std::cout<<std::endl;

        for(int i=0; i<count;i++){
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;

        for(int i=count; i<arrSize; i++){
            std::cout<<arr[i]<<" ";
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

        long long arr[n];
        for(int i=0; i<n; i++){
            std::cin>>arr[i];
        }

        sol.solve(arr,n);        
    }
}