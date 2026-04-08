#include<iostream>
int main(){
	int num;
	std::cin>>num;
	int reverse = 0;
	while(num>0){
		int lastdigit = num % 10 ;
		reverse = reverse*10 + lastdigit;
		num /= 10;
	}
	std::cout<<reverse<<"\n";
	return 0;
}
