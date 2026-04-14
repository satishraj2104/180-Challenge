// put last placed array element in 0 index and move 1 index elemenet from 0 index element

#include<iostream>
int main(){
    int arr [5] = {2,3,11,7,4};
    int temp = arr[4];
    for(int i=4;i>=0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}