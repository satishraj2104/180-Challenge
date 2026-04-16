// {5, 4, 3, 2, 1}
#include<iostream>
int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    for(int i=1;i<5;i++){
        int key = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = key;
    }

    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}