#include<iostream>
int main(){
	int num;
	std::cin>>num;//342
	int temp = num;
	int ans = 0;
	while(num>0){
		int lastdigit = num%10;
		ans = ans*10 + lastdigit;
		num = num / 10;
	}
	std::cout<<"reverse number of "<<temp<<" is "<<ans<<"\n";
	return 0;
}
