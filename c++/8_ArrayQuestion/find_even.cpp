#include<iostream>
int main(){
	int arr1[6] = {1,2,4,-23,0,-30};
	for(int i=0;i<6;i++){
		if(arr1[i]%2==0 || arr1[i]%2==-0){
			std::cout<<arr1[i]<<" ";
		}
	}
	std::cout<<std::endl;
	return 0;
}
