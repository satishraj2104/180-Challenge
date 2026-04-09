// union of array 

#include<iostream>
int main(){
    int arr1[4] = {1,3,1,0};
    int arr2[3] = {2,3,5};
    int arr3[7];

    for(int i=0;i<4;i++){
        arr3[i] = arr1[i];
    }

    for(int i=0;i<3;i++){
        arr3[i+4]=arr2[i];
    }
    for(int k=0;k<7;k++){
        std::cout<<arr3[k]<<" ";
    }
    std::cout<<std::endl;
    for(int i=0;i<7;i++){
        if(arr3[i]==-1)continue;
        for(int j=i+1;j<7;j++){
            if(arr3[i]==arr3[j]){
                arr3[i] = -1;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(arr3[i]>=0){
            std::cout<<arr3[i]<<" ";
        }
    }
    std::cout<<"\n";
    return 0;
    
}