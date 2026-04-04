#include<iostream>
bool isPrime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
			break;
		}
	}
	return true;
}

int main(){
	bool check = isPrime(6);
	if(check)
		std::cout<<"the number is prime."<<"\n";
	else
		std::cout<<"the number is not prime"<<"\n";
	return 0;
}
