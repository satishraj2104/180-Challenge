#include<iostream>
int main(){
    int arr[5] = {3,13,12,11,8};
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}