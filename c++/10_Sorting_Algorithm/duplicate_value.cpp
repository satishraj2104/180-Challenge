#include<iostream>
int main(){
    int arr[5] = {1,2,3,2,4};
    for(int i=0;i<5;i++){
        bool isDuplicate = false;
        for(int j=0;j<5;j++){
            if(i!=j && arr[i]==arr[j]){
                isDuplicate = true;
                std::cout<<arr[i]<<" ";
                arr[i] = -1;
            }
        }
        // if(isDuplicate){
            
        // }
    }
    std::cout<<std::endl;
    return 0;
}