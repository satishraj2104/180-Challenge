#include<iostream>
int main(){
    int year;
    std::cout<<"Enter Year : ";
    std::cin>>year;
    if(year%400==0)
    std::cout<<"it is leap year\n";
    else if(year%4==0 && year%100 != 0)
    std::cout<<"it is leap year\n";
    else
    std::cout<<"it is not leap year\n";
    return 0;
}