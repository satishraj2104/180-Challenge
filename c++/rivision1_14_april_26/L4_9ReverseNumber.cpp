#include<iostream>
int main(){
    int num ;
    std::cout<<"Enter Number :";
    std::cin>>num;
    int reverse = 0 ;
    while(num){
        reverse = reverse*10 + num%10;
        num /= 10;
    }
    std::cout<<reverse<<"\n";
    return 0;
}