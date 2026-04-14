#include<iostream>
int main(){
    int arr[4] = {6,4,2,-5};
    int steps = 0;
    int countzero = 0;
    int countNegative = 0;

    for(int i=0;i<4;i++){
        if(arr[i]>0){
            steps = steps + (arr[i]-1);
        }
        else if(arr[i]<0){
            steps = steps + abs(arr[i]-1);
            countNegative++;
        }
        else{
            steps = steps + 1;
            countzero++;
        }
    }
    if(countNegative % 2 != 0 && countzero==0){
        steps += 2;
    }

    std::cout<<steps<<"\n";
    return 0;
}