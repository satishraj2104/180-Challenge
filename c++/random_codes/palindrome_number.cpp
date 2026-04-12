#include<iostream>
int main(){
	int number = 787;
	int check = number;
	int temp = 0;
	while(number > 0){
		int lastdigit = number % 10;
		temp = temp*10 + lastdigit;
		number /= 10;
	}
	if(check==temp){
		std::cout<<"number is palindrome number\n";
	}
	else{
		std::cout<<"number is not palindrome number\n";
	}
	return 0;
}
