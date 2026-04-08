#include<iostream>
int main(){
    int arr[5] = {2,3,13,8,7};
    for(int i=0;i<5;i++){ // outer array print row 5 times
        for(int j=0;j<5;j++){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}