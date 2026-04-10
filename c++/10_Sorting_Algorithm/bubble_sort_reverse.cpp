// bubble sort practice (reverse)

#include<iostream>
int main(){
    int arr[6] = {2,6,1,5,8,7};
    for(int i=0;i<5;i++){
        for(int j=0;j<6-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0;i<6;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}