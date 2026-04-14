#include<iostream>
int main(){
    char let = 'a';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            std::cout<<let<<" ";
        }
        let++;
        std::cout<<"\n";
    }
    return 0;
}