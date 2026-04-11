#include<iostream>
int main(){
	int arr[5] = {1,2,3,4,5};
	int temp = arr[4];
	for(int i=3;i>=0;i-- ){
		arr[i+1] = arr[i];
	}
	arr[0] = temp;

	for(int i=0;i<5;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
