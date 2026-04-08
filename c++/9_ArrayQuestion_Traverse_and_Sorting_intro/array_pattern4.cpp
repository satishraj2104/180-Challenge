#include<iostream>
int main(){
    int arr[5] = {3,11,13,8,4};
    for(int i=0;i<5;i++){
        for(int j=5-1;j>=0;j--){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}