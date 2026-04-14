#include<iostream>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j<i)
            std::cout<<" ";
            if(j>=i){
                std::cout<<j<<" ";
            }

        }
        std::cout<<std::endl;
    }
    return 0;
}