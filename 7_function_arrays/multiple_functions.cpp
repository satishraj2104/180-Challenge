#include<iostream>
using namespace std;

void addTwonumbers(int n1 , int n2){
    cout<<n1+n2<<endl;
    cout<<"--------"<<endl;
}

void printTable(int n){
    for(int i=1;i<=10;i++){
        cout<<n*i<<" ";
    }
    cout<<endl<<"--------------"<<"\n";
}

void factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact<<endl<<"----------"<<endl;
}

void isPrime(int n){
    if(n<=1){
        cout<<"not prime ";
        return;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime\n";
            break;
        }
    }
    cout<<"Prime Number \n";

}

int main(){
    int num1,num2  ;
    cout<<"Enter Number : ";
    cin>>num1>>num2;

    addTwonumbers(num1,num2);

    printTable(num1);

    factorial(num2);

    isPrime(num1);

    return 0;
}