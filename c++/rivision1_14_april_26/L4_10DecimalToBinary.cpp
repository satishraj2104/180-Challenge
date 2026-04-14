#include<iostream>
int main(){
    int num = 32;
    int mul = 1;
    int sum = 0;
    while(num > 0){
        int last = num%2;
        sum = sum + last*mul;
        num /= 2;
        mul *= 10;
    }
    std::cout<<sum<<"\n";
    return 0;
}