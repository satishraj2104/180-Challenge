#include<iostream>
int main(){
	int arr[5] = {0,1,2,3,4};
	int max = arr[0] , min = arr[0];
	for(int i=0;i<5;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		else if(arr[i]<min){
			min = arr[i];
		}
	}
	std::cout<<"max number is "<<max<<"\n";
	std::cout<<"min number is "<<min<<"\n";
	return 0;
}
