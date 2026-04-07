#include<iostream>
int main(){
    int arr1[5] = {1,2,3,4,5};
    int even_count = 0;
    int odd_count = 0;
    for(int i=0;i<5;i++){
        if(arr1[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    std::cout<<"total even number in array are "<<even_count<<"\n";
    std::cout<<"total odd number in array are "<<odd_count<<"\n";
}