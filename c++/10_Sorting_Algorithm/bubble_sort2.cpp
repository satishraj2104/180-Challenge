// bubble sort practice

#include<iostream>
int main(){
    int arr[10] = {1,4,7,3,9,8,11,2,5,6};
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}