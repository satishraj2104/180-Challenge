#include<iostream>
int main(){
    for(int i=1;i<=5;i++){
        // for space 
        for(int j=1;j<=5-i;j++){
            std::cout<<" ";
        }
        //for star
        for(int k=1;k<=2*i-1;k++){
            std::cout<<"*";
        }
        // new line
        std::cout<<"\n";
    }
    std::cout<<"\n";
    return 0;
}