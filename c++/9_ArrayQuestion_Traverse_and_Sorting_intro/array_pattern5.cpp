#include<iostream>
int main(){
    int arr[5] = {3,13,12,8,4};
    for(int i=0;i<5;i++){
        for(int j=4-i;j>=0;j--){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}