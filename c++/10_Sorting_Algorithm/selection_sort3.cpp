#include<iostream>
int main(){
    int arr[7] = {4,2,7,1,8,3,6};

    for(int i=0;i<6;i++){
        int index = i;
        for(int j=i+1;j<7;j++){
            if(arr[index]>arr[j]){
                index = j;
            }
        }
        int temp = arr[index]; // new sort value ithe temp madhe sort keli
        arr[index] = arr[i]; // ithe arr[index] manje j
        arr[i] = temp;
    }
    for(int i=0;i<7;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}