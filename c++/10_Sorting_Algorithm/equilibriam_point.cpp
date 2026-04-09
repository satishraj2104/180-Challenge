#include<iostream>
int main(){
    int arr[5] = {1,2,0,1,0};
    int right_sum =  0 , left_sum = 0;
    for(int i=0;i<5;i++){
        right_sum += arr[i];
    }

    for(int i=0;i<5;i++){

        right_sum -= arr[i];

        if(right_sum==left_sum){
            std::cout<<"Equilibrian point index is "<<i<<"\n";
            return 0;
        }
        
        left_sum += arr[i];
    }

    return 0;
}