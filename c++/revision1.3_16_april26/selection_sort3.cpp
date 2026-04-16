// {20, 15, 10, 5, 0}
#include<iostream>
int main(){
    int arr[5] = {20, 15, 10, 5, 0};
    for(int i=0;i<4;i++){
        int min_index = i;
        for(int j = i+1;j<5;j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}