#include<iostream>
int main(){
    int a = 10 , b = 15 , c = 20;
    if(a>b && a>c)
    std::cout<<"Max number is "<<a<<"\n";
    else if (b>a && b > c)
    std::cout<<"Max Number is "<<b<<"\n";
    else{
        std::cout<<"Max Number is "<<c<<"\n";
    }
    return 0;
}