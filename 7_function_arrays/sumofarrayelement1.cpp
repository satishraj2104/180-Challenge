#include<iostream>
int main(){
	int arr1[5] = {2,5,7,8,1};
	int sum = 0;
	for(int i=0;i<5;i++){
		sum = sum + arr1[i];
	}
	std::cout<<sum<<std::endl;
	return 0;
}
