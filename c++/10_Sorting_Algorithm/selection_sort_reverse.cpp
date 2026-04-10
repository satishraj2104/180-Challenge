// practice of selection sort in reverse

#include<iostream>
int main(){
    int arr[5] = {1,4,6,3,5};
    for(int i =  0;i<4;i++){
        int index = i; // just take one element and compare it to whole array;
        for(int j=i+1;j<5;j++){
            if(arr[index] < arr[j]){
                index = j;
            }
        }
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i] = temp;

    }
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}