#include<iostream>
int factorial(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}
int main(){
    int fact = factorial(6);
    std::cout<<fact<<"\n";
    return 0;
}