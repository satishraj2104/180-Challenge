// [1,3,5,2,2];

#include<iostream>
int main(){
    int arr[5] = {1,3,5,2,2,};
    int right_sum = 0 , left_sum = 0;
    for(int i=0;i<5;i++){
        right_sum += arr[i];
    }

    for(int i=0;i<5;i++){
        right_sum -= arr[i];
        if(right_sum==left_sum){
            std::cout<<i<<" ";
        }
        left_sum += arr[i];
    }

    if(right_sum!=left_sum){
        std::cout<<-1;
    }

    std::cout<<std::endl;
    return 0;
}