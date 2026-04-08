#include<iostream>
int main(){
    int arr[5] = {3,13,12,7,4};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}