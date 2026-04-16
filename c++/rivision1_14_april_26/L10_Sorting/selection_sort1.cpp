#include<iostream>
int main(){
    int arr[6] = {5,9,4,1,2,12};
    for(int i=0;i<6;i++){
        int index = i;
        for(int j=i+1;j<6;j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        int temp = arr[index];
        arr[index]  = arr[i];
        arr[i] = temp;
    }

    for(int i=0;i<6;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}