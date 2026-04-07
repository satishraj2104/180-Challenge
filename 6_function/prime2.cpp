// check prime number
#include<iostream>
bool isPrime(int num){
	if(num<=1)
		return false;
	for(int i=2;i<num;i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int num;
	std::cout<<"Enter Number : ";
	std::cin>>num;
	if(isPrime(num))
		std::cout<<"Prime Number \n";
	else
		std::cout<<"Not Prime Number \n";

	return 0;

}
