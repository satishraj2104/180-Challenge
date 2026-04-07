// 1's compliment program 

#include<iostream>
int main(){
	int num ;
	std::cin>>num;
	int ans = 0;
	int mult = 1;
	while(num>0){
		int lastdigit = num % 10;
		if(lastdigit == 1)
			lastdigit = 0;
		else
			lastdigit = 1;
		ans = ans + lastdigit*mult;
		mult *= 10;
		num /= 10;
	}
	std::cout<<ans<<std::endl;
	return 0;

}
