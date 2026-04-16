#include<iostream>
int main(){
	int arr[5] = {1,3,2,3,4};
	for(int i=0;i<5;i++){
		for(int j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
				std::cout<<arr[i]<<" ";
			}
		}
	}
	return 0;
}
