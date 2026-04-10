// insertion sort reverse practice

#include<iostream>
int main(){
    int arr[5] = {2,5,0,2,3};
    for(int i=0;i<4;i++){
        for(int j=i;j>=0;j--){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else{
                break;
            }
        }
    }

    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n";
    return 0;
}