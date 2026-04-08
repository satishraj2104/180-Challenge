#include<iostream>
int main(){
	int arr[5] = {12,3,4,5,6};
	int arr2[4];
	arr2[0] = 100;
	arr2[1] = 200;
	arr2[2] = 300;
	arr2[3] = 400;

	for(int i=0;i<5;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"now second array\n";

	for(int i=0;i<4;i++){
		std::cout<<arr2[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
