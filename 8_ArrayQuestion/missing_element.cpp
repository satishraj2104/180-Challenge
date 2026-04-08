#include<iostream>
int main(){
	int arr[5] = {1,3,4,5,6};
	int total_sum = 6*(6+1)/2;
	int arr_sum = 0;
	for(int i=0;i<5;i++){
		arr_sum = arr_sum + arr[i];
	}
	std::cout<<"missing element in array is : "<<total_sum - arr_sum<<"\n";
	return 0;
}
