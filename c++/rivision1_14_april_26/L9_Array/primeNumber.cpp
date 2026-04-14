#include<iostream>
void isPrime(int n){
        if(n<2){
            return ;
        }
        for(int i=2;i<n;i++){
            if(n%i==0)
            return;
        }
        std::cout<<n<<" ";
    }
int main(){
    for(int i=2;i<=500;i++){
        isPrime(i);
    }
    return 0;
}