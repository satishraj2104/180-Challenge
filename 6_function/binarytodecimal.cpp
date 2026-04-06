#include<iostream>
int main(){
	int num;
	std::cout<<"Enter Number : "<<"\n";
	std::cin>>num;
	int ans = 0; 
	int mult = 1;
	while(num>0){
		int lastdigit = num % 10;
		ans = ans + lastdigit*mult;
		num = num / 10;
		mult *= 2;
	}
	std::cout<<ans<<"\n";
	return 0;
}
