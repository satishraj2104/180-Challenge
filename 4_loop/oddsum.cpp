#include<iostream>
int main(){
	int sum = 0;
	for(int i=1;i<=200;i++){
		if(i%2!=0){
			sum = sum + i;
		}
	}
	std::cout<<sum<<std::endl;
	return 0;
}
