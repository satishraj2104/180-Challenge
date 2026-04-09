// cyclic array gfg program

#include<iostream>
int main(){
    int arr[6] = {8,7,1,5,2,90};
    int temp = arr[5];
    for(int i=5;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i=0;i<6;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}