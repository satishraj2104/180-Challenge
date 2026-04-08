#include<iostream>
int main(){
	int num;
	std::cin>>num;
	int sum = 0;
	int mul = 1;
	while(num>0){
		int lastdigit = num%2;
		sum = sum + lastdigit*mul;
		num = num / 2;
		mul = mul*10;
	}
	std::cout<<sum<<"\n";
	return 0;
}
