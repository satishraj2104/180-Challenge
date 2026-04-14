#include<iostream>
int main(){
    int arr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}