#include<iostream>
void add(int a , int b){
    std::cout<<a+b<<std::endl;
}
void add(int a , int b , int c){
    std::cout<<a+b+c<<std::endl;
}

// function name same but different parameter

int main(){
    add(4,5);
    add(6,7,8);
    return 0;
}