#include<iostream>
int main(){
    int n = 8;
    int first = 0 , second = 1;
    std::cout<<first<<" "<<second<<" ";
    for(int i=3;i<=n;i++){
        int current = first + second;
        std::cout<<current<<" ";
        first = second;
        second = current ;
    }
    std::cout<<std::endl;
    return 0;
}