#include<iostream>
int main(){
	int arr[6] = {2,3,11,8,7,-2};
	int min = arr[0];
	for(int i=1;i<6;i++){
		if(arr[i] < min){
			min=arr[i];
		}
	}
	std::cout<<min<<"\n";
	return 0;
}
