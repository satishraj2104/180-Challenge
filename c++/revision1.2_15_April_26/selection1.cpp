#include<iostream>
int main(){
	int arr[5] = {5,3,4,1,2};
	for(int i=0;i<5-1;i++){
		int minindex = i;
		for(int j=i+1;j<5;j++){
			if(arr[minindex] >  arr[j]){
				minindex = j;
			}
		}
		int temp = arr[minindex];
		arr[minindex] = arr[i];
		arr[i] = temp;
	}
	
	for(int i=0;i<5;i++){
		std::cout<<arr[i]<<" ";
	}
	std::cout<<"\n";
	return 0;
}
