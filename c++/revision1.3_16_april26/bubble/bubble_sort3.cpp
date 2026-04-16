// {10, 9, 8, 7, 6}
#include<iostream>
int main(){
    int arr[5] = {10, 9, 8, 7, 6};
    for(int i=0;i<5;i++){
        bool swap = false;
        for(int j=0;j<5-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                swap = true;
            }
        }
        if(swap==false){
            break;
        }
    }

    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}