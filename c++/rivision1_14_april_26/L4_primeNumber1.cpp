#include<iostream>
int main(){
    int num = 11;
    for(int i=2;i<num;i++){
        if(num%i==0){
            std::cout<<"Not prime\n";
            return 0;
        }
    }
    std::cout<<"prime number \n";
    return 0;
}