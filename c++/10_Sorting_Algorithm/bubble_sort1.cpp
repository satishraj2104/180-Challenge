// bubble sort manje kay tr don value compare karaycha ani mothi value pathimage dhakalayachi ,
// asa karta karta sarvat mothi value last la yeil


#include<iostream>
int main(){
    int arr[6] = {2,6,3,8,1,3};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<6-1-i;j++){
            if(arr[j] > arr[j+1]){
                // swap here 
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
