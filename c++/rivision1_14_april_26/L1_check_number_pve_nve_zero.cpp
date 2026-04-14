#include<iostream>
int main(){
    int num = 16;
    if(num>0)
    std::cout<<"Positive Number \n";
    else if (num < 0){
        std::cout<<"Negative Number\n";
    }
    else{
        std::cout<<"Zero\n";
    }
    return 0;
}