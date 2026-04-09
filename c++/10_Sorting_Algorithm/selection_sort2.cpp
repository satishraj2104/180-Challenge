// selection sort , ek select kara  ani fakt tyala sort kara manjech selection sort.

#include<iostream>
int main(){
    int arr[9] = {1,5,8,2,9,4,3,7,6};
    for(int i=0;i<8;i++){ //  ha loop fakt value ithe kontya index sathi shodhayacha te baghto
        int index = i;
        for(int j=i+1;j<9;j++){
            if(arr[index] > arr[j]){
                index = j;
            }
        }
        int temp = arr[index];
            arr[index] = arr[i];
            arr[i] = temp;
    } 
    for(int i=0;i<9;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}