// find the max and min number from array

#include<iostream>
int main(){
	int arr1[5] = {1,2,3,4,5};
	int max = arr1[0];
	int min = arr1[0];

	for(int i=0;i<5;i++){
		if(max<arr1[i]){
			max=arr1[i];
		}
		if(min>arr1[i]){
			min=arr1[i];
		}
	}
	std::cout<<"Max number in array is "<<max<<"\n";
	std::cout<<"Min number in array is "<<min<<"\n";
	return 0;
}
