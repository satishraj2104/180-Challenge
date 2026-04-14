#include<iostream>
int main(){
    int arr[6] = {1,5,77,3,99,2};
    int max = arr[0];
    for(int i=0;i<6;i++){
        if(max<arr[i])
        max = arr[i];
    }
    std::cout<<max<<"\n";
    return 0;
}