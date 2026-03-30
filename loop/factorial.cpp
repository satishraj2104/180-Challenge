#include<iostream>
int main(){
	int number = 5;
	int ans = 1;
	for(int i=1;i<=number;i++){
		ans = i * ans; 
	}
	std::cout<<ans<<std::endl;
	return 0;
}
