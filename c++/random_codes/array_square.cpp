#include<iostream>
int main(){
	int arr[5] = {1,2,3,4,5};
	int arr2[5];
	for(int i=0;i<5;i++){
		int square = arr[i]*arr[i];
		arr2[i]=square;
	}

	for(int i=0;i<5;i++){
		std::cout<<arr2[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
