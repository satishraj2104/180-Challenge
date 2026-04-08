#include<iostream>
int main(){
	int arr1[5] = {2,5,7,1,9};
	int temp = arr1[4];
	for(int i=3;i>=0;i--){
		arr1[i+1] = arr1[i];
	}
	arr1[0] = temp;
	for(int i=0;i<5;i++){
		std::cout<<arr1[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
