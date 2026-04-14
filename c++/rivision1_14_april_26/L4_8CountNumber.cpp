#include<iostream>
int main(){
    int num ;
    std::cout<<"Enter Number : ";
    std::cin>>num;
    int count = 0;
    while(num!=0){
        num /= 10;
        count++;
    }
    std::cout<<count<<" digit present in number.\n";
    return 0;
}