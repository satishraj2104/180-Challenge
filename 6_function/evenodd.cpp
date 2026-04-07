#include<iostream>
int isEvenOdd(int num){
	if(num % 2 != 0){
		return 0;
	}
	else
		return 1;
}
int main(){
	int num ;
	std::cout<<"Enter Number : ";
	std::cin>>num;
	if(isEvenOdd(num)){
		std::cout<<"Even\n";
	}
	else
		std::cout<<"Odd\n";
	return 0;

}
