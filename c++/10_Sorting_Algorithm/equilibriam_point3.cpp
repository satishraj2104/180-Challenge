// equilibriam_point practice

#include<iostream>
int main(){
    int arr[7] = {0,2,3,4,5,6,7};
    int right_sum = 0, left_sum = 0;
    for(int i=0;i<7;i++){
        right_sum += arr[i];
    }
    std::cout<<"total sum = "<<right_sum<<" \n";
    for(int i=0;i<7;i++){
        right_sum -= arr[i];
        std::cout<<right_sum<<"\n";
        if(right_sum == left_sum){
            std::cout<<"equilibriam point is "<<i<<" "<<"\n";
        }
        left_sum += arr[i];
        std::cout<<left_sum<<"1\n";
    }

    std::cout<<"equilibriam point not found in given array\n";
    return 0;
}