#include<iostream>
void print(int num = 2)
{
    std::cout<<num;
}

int main(){
    int num = 5;
    print(num);
    std::cout<<std::endl;
    print();
    std::cout<<std::endl;
    return 0;
}