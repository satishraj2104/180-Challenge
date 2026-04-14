#include<iostream>
int main(){
    int number;
    std::cout<<"Enter Number to get table : ";
    std::cin>>number;
    for(int i=1;i<=10;i++){
        std::cout<<number*i<<"\n";
    }
    return 0;
}