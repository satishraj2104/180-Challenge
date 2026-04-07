// reverse the array

#include<iostream>
int main(){
	int arr1[5] = {10,20,30,40,50};
	int arr2[5];

	int x = 0;
	for(int i=4;i>=0;i--){
		arr2[x] = arr1[i];
		x++;
	}
	for(int i=0;i<5;i++){
		std::cout<<arr2[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
